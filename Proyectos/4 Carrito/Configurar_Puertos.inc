;Configurar puertos
Configurar_Puertos
	CLRF PORTB ;Limpia el portB
	BSF STATUS,RP0  ;Cambia la banco 1   
	BCF STATUS,RP1
	CLRF TRISB
	bsf TXSTA, BRGH
	MOVLW D'129' ;Define el baudaje
	MOVWF SPBRG ;A 9600 bauds
	BCF TXSTA, SYNC ;Define la comunicacion asincrona 
	BSF TXSTA, TXEN ;Habilita la transmisión de datos
	BCF STATUS,RP0  ;Cambia la banco 0 
	BSF RCSTA, SPEN ;Habilita el puerto serie
	BSF RCSTA, CREN ;Habilita la recepción de datos
	return