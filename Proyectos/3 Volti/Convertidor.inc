;Convertidor Analógico
Convertidor
	MOVWF ADCON0 ;Configura al convertidor
	BSF ADCON0,h'02' ;Inicia la conversión
	call Retardo ;Espera 20 micros
Espera	
	BTFSC ADCON0,h'02' ;Comprueba que ya haya terminado
	goto Espera 
	MOVF ADRESH,W ;Mueve el resultado de la conversión a W
	return