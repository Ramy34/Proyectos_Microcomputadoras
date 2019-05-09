MENSAJE_1
	movlw 'V'
	movwf PORTB
	call LCD_Envia
	movlw 'o'
	movwf PORTB
	call LCD_Envia
	movlw 'l'
	movwf PORTB
	call LCD_Envia
	movlw ':'
	movwf PORTB
	call LCD_Envia	

	movf U,W
	movwf PORTB
	call LCD_Envia
	movlw '.'
	movwf PORTB
	call LCD_Envia
	movf L,W
	movwf PORTB
	call LCD_Envia
	movf L1,W
	movwf PORTB
	call LCD_Envia
	movlw 'V'
	movwf PORTB
	call LCD_Envia

	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia

	movlw h'00'
	movwf PORTB
	call LCD_Envia
	movlw h'04'
	movwf PORTB
	call LCD_Envia

	return
	
MENSAJE_2
	movlw 'H'
	movwf PORTB
	call LCD_Envia
	movlw 'e'
	movwf PORTB
	call LCD_Envia
	movlw 'x'
	movwf PORTB
	call LCD_Envia
	movlw ':'
	movwf PORTB
	call LCD_Envia

	movf HA,W
	movwf PORTB
	call LCD_Envia
	movf HB,W
	movwf PORTB
	call LCD_Envia

	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia

	movlw h'02'
	movwf PORTB
	call LCD_Envia
	movlw h'06'
	movwf PORTB
	call LCD_Envia
	return
	
MENSAJE_3
	movlw 'T'
	movwf PORTB
	call LCD_Envia
	movlw 'e'
	movwf PORTB
	call LCD_Envia
	movlw 'm'
	movwf PORTB
	call LCD_Envia
	movlw 'p'
	movwf PORTB
	call LCD_Envia
	movlw ':'
	movwf PORTB
	call LCD_Envia

	movf Centenas,W
	movwf PORTB
	call LCD_Envia
	movf Decenas,W
	movwf PORTB
	call LCD_Envia
	movf Unidades,W
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia

	movlw h'00'
	movwf PORTB
	call LCD_Envia
	movlw h'04'
	movwf PORTB
	call LCD_Envia
	return
MENSAJE_4
	movlw 'H'
	movwf PORTB
	call LCD_Envia
	movlw 'e'
	movwf PORTB
	call LCD_Envia
	movlw 'x'
	movwf PORTB
	call LCD_Envia
	movlw ':'
	movwf PORTB
	call LCD_Envia

	movf HA,W
	movwf PORTB
	call LCD_Envia
	movf HB,W
	movwf PORTB
	call LCD_Envia

	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia

	movlw h'02'
	movwf PORTB
	call LCD_Envia
	movlw h'06'
	movwf PORTB
	call LCD_Envia
	return