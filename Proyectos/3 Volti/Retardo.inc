DELAY ;Retardo para el LCD
	movlw .100
	movwf val2

ciclo
	movlw .255
	movwf val1

ciclo2
	decfsz val1,h'01'
	goto ciclo2
	decfsz val2,h'01'
	goto ciclo
	return

Retardo ;Retardo para el convertidor
	movlw .33
	movwf val0

ciclo3
	decfsz val0,h'01'
	goto ciclo3
	return

Reta
	movlw .255
	movwf val2

ciclo4
	movlw .255
	movwf val1

ciclo5
	decfsz val1,h'01'
	goto ciclo5
	decfsz val2,h'01'
	goto ciclo4
	return