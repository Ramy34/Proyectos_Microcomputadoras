R_V_R
	movlw h'00' ;Configuración para el parpadeo
	movwf tmp ;Se pasa a una variable tmp
	movlw h'ff'
	movwf val5
	call Delay
	return
R_A
	movlw h'03'
	movwf tmp
	movlw h'ff'
	movwf val5
	call Delay
	movlw h'4f'
	movwf val5
	call Delay
	return
A_R
	movlw h'30'
	movwf tmp
	movlw h'ff'
	movwf val5
	call Delay
	movlw h'4f'
	movwf val5
	call Delay
	return