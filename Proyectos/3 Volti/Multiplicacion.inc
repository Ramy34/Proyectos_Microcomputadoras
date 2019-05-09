;Multiplicación
Multiplicacion
	movf Za,W ;Es el valor del residuo que debemos de multiplicar
	addwf E,1 ; E = E + Za
	btfsc STATUS, h'00' ;Revisa si hubo algún desbordamiento
	call negativo ;Si hubo desbordamiento salta
	incf M,1 ;Incrementa para el contador de la multiplicación
	movlw X ;W = 9
	xorwf M,0 ;AND entre  W y X
	btfss STATUS, h'02' ;Comprueba la bandera de cero para saber si ya se multiplico por 10
	goto Multiplicacion ;Significa que aún no multiplicó por 10
	return

negativo
	movlw h'01'; W = 1
	addwf T,W ; W = T + 1
	movwf T ;T = W
	return ;Regresa