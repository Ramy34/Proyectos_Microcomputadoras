Configurar_Puertos
	CLRF PORTA ;Limpia el portA
	CLRF PORTB ;Limpia el portB
	CLRF PORTD ;Limpia el portD
	BSF STATUS,RP0  ;Cambia la banco 1   
	BCF STATUS,RP1
	CLRF TRISB ;Configura el puerto B como salida
	CLRF TRISD ;Configura el puerto D como salida
	movlw h'06' 
	movwf ADCON1 ;Configura el puerto A y E como digitales 
	MOVLW h'3F'
	MOVWF TRISA ;Configura el puerto A como salida
	BCF STATUS,RP0 ;Regresa al banco 0
	return