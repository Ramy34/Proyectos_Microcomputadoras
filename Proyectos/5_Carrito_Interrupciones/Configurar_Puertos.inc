;Configurar Puertos
	CONTADOR equ h'29'
	CONTADOR2 equ h'30'
	CONTADOR3 equ h'31'
Configurar_Puertos
	CLRF PORTB ;Limpia el portB
	BSF STATUS,RP0  ;Cambia la banco 1   
	BCF STATUS,RP1
	CLRF TRISB
	BSF PIE1,TMR1IE
	bsf TXSTA, BRGH
	MOVLW D'129' ;Define el baudaje
	MOVWF SPBRG ;A 9600 bauds
	BCF TXSTA, SYNC ;Define la comunicacion asincrona 
	BSF TXSTA, TXEN ;Habilita la transmisión de datos
	BCF STATUS,RP0  ;Cambia la banco 0   
	MOVLW 0X31
	MOVWF T1CON
	BSF RCSTA, SPEN ;Habilita el puerto serie
	BSF RCSTA, CREN ;Habilita la recepción de datos
	BSF INTCON,PEIE
	BSF INTCON,GIE
	BCF PIR1,TMR1IE
	CLRF CONTADOR
	CLRF CONTADOR2
	CLRF CONTADOR3
	return