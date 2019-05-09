;Conversión de Hexa a Decimal para el voltimetro
CHD
	movwf E ;Pasamos el valor de ADRESH a E
	movlw h'00' ;Pasamos un cero para inicializar los contadores
	movwf U 
	movwf T
	movwf M
	movwf L
	movwf L1
	movwf Za
loop1
	movlw h'33' ;Número a restar 51 decimal
	subwf E,0 ; W = ADRESH - 33h
	btfss STATUS, h'00';Comprueba si el resultado es positivo
	goto conf ;Salta si fue negativo y pasa a los decimales
	movwf E ;Guarda el resultado de la resta
	incf U,1 ;Incrementa la parte entera
	goto loop1 ;Regresa a restar
conf
	movf E,W ; W = E
	movwf Za ;Za = E
	call Multiplicacion
loop2
	movlw h'33' ;Número a restar 51 decimal
	subwf E,0 ; W = E - W
	btfss STATUS, h'00';Comprueba si el resultado es positivo
	goto loop3
regreso
	movwf E ;Guarda el resultado de la resta
	incf L,1 ;Incrementa la parte decimal
	goto loop2 ;Regresa a restar
loop3
	movwf Za ;Guarda el resultado de la resta
	movlw h'01'; W = 1
	subwf T,0 ; W = T - 1
	btfss STATUS,h'00';Comprueba el resultado de la resta
	goto loop4 
	movwf T
	movf Za, 0
	goto regreso
loop4
	movlw h'00' ;Limpiamos el registro M
	movwf M
	movf E,W ; W = E
	movwf Za ;Za = E
	call Multiplicacion
loop5
	movlw h'33' ;Número a restar 51 decimal
	subwf E,0 ; W = E - W
	btfss STATUS, h'00';Comprueba si el resultado es positivo
	goto loop6
ret
	movwf E ;Guarda el resultado de la resta
	incf L1,1 ;Incrementa la parte decimal
	goto loop5 ;Regresa a restar
loop6
	movwf Za ;Guarda el resultado de la resta
	movlw h'01'; W = 1
	subwf T,0 ; W = T - 1
	btfss STATUS,h'02';Comprueba el resultado de la resta
	goto loop7 ;Si es 
	movwf T
	movf Za, 0
	goto ret
loop7 ;Realiza la conversión a Ascii
	movlw h'30'
	addwf U,1
	movlw h'30'
	addwf L,1
	movlw h'30'
	addwf L1,1
	return