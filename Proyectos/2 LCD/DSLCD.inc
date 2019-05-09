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
	call LCD_Inicializa
	call MENSAJE_1
	call LCD_Linea2
	call MENSAJE_2
	return
UNO
	call LCD_Desplazamiento_D
	call MENSAJE_1
	call LCD_Desplazamiento_Dinf
	call MENSAJE_2
	incf val3
	incf val5
	movlw h'90'
	subwf val3,W
	btfsc STATUS,H'02'
	call SALTO
	movlw h'D0'
	subwf val5,W
	btfsc STATUS,H'02'
	call SALTO2
	return
DOS
	call LCD_Desplazamiento_I
	call MENSAJE_1
	call LCD_Desplazamiento_Iinf
	call MENSAJE_2
	decf val4
	decf val6
	movlw h'7F'
	subwf val4,W
	btfsc STATUS,H'02'
	call SALTO3
	movlw h'BF'
	subwf val6,W
	btfsc STATUS,H'02'
	call SALTO4
	return
TRES
	call CREATE_Casa
	call LCD_Inicializa
	call MENSAJE_3
	return
SALTO
	movlw h'80'
	movwf val3
	return
SALTO2
	movlw h'C0'
	movwf val5
	return
SALTO3
	movlw h'8F'
	movwf val4
	return
SALTO4
	movlw h'CF'
	movwf val6
	return