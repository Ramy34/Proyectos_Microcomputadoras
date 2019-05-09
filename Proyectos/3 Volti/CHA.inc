;Convertidor Hex a Ascii
CHA
	movf ADRESH,W ;Mueve el valor del ADRESH a W
	movwf Tem ;Pasa el ADRESH a W
	movlw h'F0'
	andwf Tem,1 ;Eliminamos la parte baja
	swapf Tem,0
	movwf Tem
	call comp
	movwf HA

	movf ADRESH,W ;Mueve el valor del ADRESH a W
	movwf Tem ;Pasa el ADRESH a W
	movlw h'0F'
	andwf Tem,1 ;Eliminamos la parte baja
	call comp
	movwf HB
	return
comp
	movlw h'09'
	subwf Tem,0
	btfss STATUS, h'00'
	goto numero
	btfsc STATUS, h'02'
	goto numero
	goto letra
reg
	return
numero
	movlw h'30'
	addwf Tem,0 
	goto reg
letra
	movlw h'37'
	addwf Tem,0
	goto reg	