#include <16f877A.h>
#fuses HS,NOWDT
#use delay(clock=20000000)
#use rs232(baud=9600, xmit=PIN_C6, rcv=PIN_C7)
#org 0x1F00, 0x1FFF void loader16F877(void) {} //for the 8k 16F876/7

#define EN PIN_D7
#define RS PIN_D6
#define RW PIN_D5

unsigned char value;
int contador, renglon,periodo = 255,cont=0,a=0,x,valor;
char resultado, ent,dec,cen;
float conv;
char opcion;

void lcd_conf(){ //Configura el lcd
	set_tris_b(0x00);
	delay_ms(100);
	output_b(0x00);
	delay_ms(100);
}
void lcd_cmd(unsigned char value){ //Habilita los comandos del lcd
	output_b(value);
	output_low(RS);
	output_low(RW);
	output_high(EN);
	delay_ms(10);
	output_low(EN);
}
void lcd_ini(){ //Inicializa el lcd
	output_low(RS);
	lcd_cmd(0x38);
	lcd_cmd(0x01);
	lcd_cmd(0x0C);
	lcd_cmd(0x3C);
	lcd_cmd(0x80);
	lcd_cmd(0x0E);
	output_high(RS);
   contador = 0;
   renglon = 0;
}
void lcd_renglon(){ //Nos mueve entre renglones
   if(renglon == 0){
   output_low(RS);
   lcd_cmd(0xC0);
 	output_high(RS);
   renglon = 1;
   }else{
   output_low(RS);
   lcd_cmd(0x80);
 	output_high(RS);
   renglon = 0;
   }
   contador = 0;
}
void lcd_data(unsigned char value){ //Envia el dato para ser mostrado en el lcd
   output_b(value);
   output_high(RS);
   output_low(RW);
   output_high(EN);
   delay_ms(10);
   output_low(EN);
}
void lcd_salida(){ //Mensaje de salida del lcd
    lcd_ini();
    lcd_data("Adios :)");
}
void lcd_renglon2(){ //Nos mueve al inicio del segundo renglon
	output_low(RS);
	lcd_cmd(0xC0);
 	output_high(RS);
}
void lcd_error(){ //Error en el modo de los foquitos al dar un numero no permitido
    lcd_ini();
    lcd_data("Error 404");
	lcd_renglon2();
	lcd_data("Not Found!");
}
void lcd_mensaje(int resultado){ //Muestra el resultado del convertidor
	ent = 48;
	dec = 48;
	cen = 48;
	while(resultado > 50){
		resultado = resultado - 51;
		ent = ent + 1;
	}
	resultado = resultado * 10;
	while(resultado > 50){
		resultado = resultado - 51;
		dec = dec + 1;
	}
	resultado = resultado * 10;
	while(resultado > 50){
		resultado = resultado - 51;
		cen = cen + 1;
	}
    lcd_ini();
    lcd_data("El voltaje es:");
	lcd_renglon2();
	lcd_data(ent);
	lcd_data(".");
	lcd_data(dec);
	lcd_data(cen);
	lcd_data("[V]");
}
void lcd_adios(){
	lcd_ini();
	lcd_data("No me quiero ir");
	lcd_renglon2();
	lcd_data("senior Stark :,(");
   delay_ms(200);
}
void lcd_inicio(){
	lcd_ini();
	lcd_data("Hola Profe :)");
}
void lcd_foquitos(){
	lcd_ini();
	lcd_data("Opcion 1");
	lcd_renglon2();
	lcd_data("Led's");
}
void lcd_lcd(){
	lcd_ini();
	lcd_data("Opcion 2");
	lcd_renglon2();
	lcd_data("LCD");
}
void lcd_cad(){
	lcd_ini();
	lcd_data("Opcion 3");
	lcd_renglon2();
	lcd_data("Convertidor");
}
void lcd_pwm(){
	lcd_ini();
	lcd_data("Opcion 4");
	lcd_renglon2();
	lcd_data("PWM");
}
char teclado(){
   opcion = getchar();
   if(opcion == '$'){
	   lcd_adios();
	   reset_cpu();
	}
	return opcion;
}
void foquitos(){ //Funcion de los foquitos
	while(1){
		opcion = teclado();
		switch(opcion){
			case '0': 	output_d(31);
						delay_ms(200);
						break;
			case '1': 	output_d(0);
						delay_ms(200);
						break;
			case '2': 	x = 0x10;
						while(x != 0x01){
							output_d(x);
							delay_ms(500);
							rotate_right( &x, 1);
						}
						output_d(x);
						delay_ms(500);
						break;
			case '3': 	x = 0x01;
						while(x != 0x10){
							output_d(x);
							delay_ms(500);
							rotate_left( &x, 1);
						}
						output_d(x);
						delay_ms(500);
						break;
			case '4': 	output_d(0);
						delay_ms(200);
						output_d(31);
						delay_ms(200);
						break;
			default :	if(opcion <=31 && opcion>= 0){
							output_d(opcion);
							delay_ms(200);
						}
		}

	}
}
void lcd(){ //Funcion del lcd
	lcd_conf();
	lcd_ini();
	while(1){
		opcion = teclado();
		contador = contador + 1;
		switch(opcion){
			case '!': lcd_ini();
			break;
			default : if(contador == 17){
						lcd_renglon();
						}
						lcd_data(opcion);
						delay_ms(100);
		}
    }
 }
void CAD(){ //Funcion del convertidor
	setup_port_a(ALL_ANALOG); //Configuracion del puerto A como analogico
	setup_adc(ADC_CLOCK_INTERNAL); //Reloj interno del convertidor AD
	set_adc_channel(0); //Seleccion del canal 0
	while(1){
		opcion = teclado();
		delay_us(20);
		resultado = read_adc();
		delay_us(20);
		lcd_mensaje(resultado);
	}
}
void PWM(){ //Funcion del PWM
	setup_ccp2(CCP_PWM); //Configura el PWM
	setup_timer_2(T2_DIV_BY_16,periodo,1);
	setup_counters(RTCC_INTERNAL,RTCC_DIV_256);
	enable_interrupts(INT_RDA);
	enable_interrupts(GLOBAL);
	while(1){
		set_pwm2_duty(valor);
	}
}

#int_rda
mod(){
	valor = getchar();
	if(valor == '$'){
	   lcd_adios();
	   reset_cpu();
	}
}

void main(){ //Programa principal
	lcd_inicio();
	while(1){
		opcion = teclado();
		switch (opcion){
			case '0': 	lcd_foquitos();
						foquitos();
						break;
			case '1': 	lcd_lcd();
						lcd();
						break;
			case '2': 	lcd_cad();
						CAD();
						break;
			case '3': 	lcd_pwm();
						PWM();
						break;
			default : lcd_error();
		}
	}
 }
