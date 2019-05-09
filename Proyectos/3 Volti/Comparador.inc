;Comparador para el dibujo del voltímetro
Comparador_Vol
	movlw h'30'
	xorwf U,0 ;Comprueba si es 0
	btfsc STATUS, h'02'
	call CarV0
	movlw h'31'
	xorwf U,0 ;Comprueba si es 0
	btfsc STATUS, h'02'
	call CarV1
	movlw h'32'
	xorwf U,0 ;Comprueba si es 0
	btfsc STATUS, h'02'
	call CarV2
	movlw h'33'
	xorwf U,0 ;Comprueba si es 0
	btfsc STATUS, h'02'
	call CarV3
	movlw h'34'
	xorwf U,0 ;Comprueba si es 0
	btfsc STATUS, h'02'
	call CarV4
	movlw h'35'
	xorwf U,0 ;Comprueba si es 0
	btfsc STATUS, h'02'
	call CarV5
	return

Comparador_Tem
	movlw h'30'
	xorwf Decenas,0 ;Comprueba si es 0
	btfsc STATUS, h'02'
	call CarT0
	movlw h'31'
	xorwf Decenas,0 ;Comprueba si es 0
	btfsc STATUS, h'02'
	call CarT16
	movlw h'32'
	xorwf Decenas,0 ;Comprueba si es 0
	btfsc STATUS, h'02'
	call CarT24
	movlw h'33'
	xorwf Decenas,0 ;Comprueba si es 0
	btfsc STATUS, h'02'
	call CarT32
	movlw h'34'
	xorwf Decenas,0 ;Comprueba si es 0
	btfsc STATUS, h'02'
	call CarT40
	movlw h'35'
	xorwf Decenas,0 ;Comprueba si es 0
	btfsc STATUS, h'02'
	call CarT56
	return