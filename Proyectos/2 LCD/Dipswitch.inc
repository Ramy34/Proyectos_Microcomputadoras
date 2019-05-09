DIPSWICH
	movlw h'00'
	subwf PORTA,W
	btfsc STATUS,H'02'
	call CERO

	movlw h'01'
	subwf PORTA,W
	btfsc STATUS,H'02'
	call UNO

	movlw h'02'
	subwf PORTA,W
	btfsc STATUS,H'02'
	call DOS

	movlw h'03'
	subwf PORTA,W
	btfsc STATUS,H'02'
	call TRES

	return
CERO	
	return
UNO
	return
DOS
	return
TRES
	return