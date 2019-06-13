#include <16f877.h>
#fuses HS,NOPROTECT,
#use delay(clock=20000000)
#use rs232(baud=9600, xmit=PIN_C6, rcv=PIN_C7)
#org 0x1F00, 0x1FFF void loader16F877(void) {} //for the 8k 16F876/7

int periodo = 255,c,val1;
char b;

#int_rda
teclado(){
   b = getchar();
   if(b == 'w'){ //Hacia adelante
		c = 10;
		output_b(c);
   }
   if(b == 'a'){ //Hacia la izquierda
		c = 6;
		output_b(c);
   }
   if(b == 's'){ //Hacia atras
	   c = 5;
	   output_b(c);
   }
   if(b == 'd'){ //Hacia derecha
	   c = 9;
	   output_b(c);
   }
   if(b == 'q'){ //Para
	   c = 0;
	   output_b(c);
   }
}
void main(){
   setup_ccp2(CCP_PWM); //Configura el PWM
   setup_timer_2(T2_DIV_BY_16,periodo,1);
   setup_counters(RTCC_INTERNAL,RTCC_DIV_256);
   enable_interrupts(INT_RDA);
   enable_interrupts(GLOBAL);
while(1){
	val1 = getchar();
   set_pwm2_duty(val1);
   }//while
   }//main
