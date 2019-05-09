MENSAJE_1
	movlw 'R'
	movwf PORTB
	call LCD_Envia
	movlw 'A'
	movwf PORTB
	call LCD_Envia
	movlw 'M'
	movwf PORTB
	call LCD_Envia
	movlw 'S'
	movwf PORTB
	call LCD_Envia
	movlw 'E'
	movwf PORTB
	call LCD_Envia
	movlw 'S'
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw h'D7'
	movwf PORTB
	call LCD_Envia
	movlw h'D0'
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	return
MENSAJE_2
	movlw 'C'
	movwf PORTB
	call LCD_Envia
	movlw 'A'
	movwf PORTB
	call LCD_Envia
	movlw 'S'
	movwf PORTB
	call LCD_Envia
	movlw 'T'
	movwf PORTB
	call LCD_Envia
	movlw 'R'
	movwf PORTB
	call LCD_Envia
	movlw 'O'
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia
	movlw 'M'
	movwf PORTB
	call LCD_Envia
	movlw 'O'
	movwf PORTB
	call LCD_Envia
	movlw 'L'
	movwf PORTB
	call LCD_Envia
	movlw 'A'
	movwf PORTB
	call LCD_Envia
	movlw 'N'
	movwf PORTB
	call LCD_Envia
	movlw 'O'
	movwf PORTB
	call LCD_Envia
	movlw ' '
	movwf PORTB
	call LCD_Envia	
	return

MENSAJE_3
	movlw h'00'
	movwf PORTB
	call LCD_Envia
	movlw h'00'
	movwf PORTB
	call LCD_Envia
	movlw h'00'
	movwf PORTB
	call LCD_Envia
	movlw h'00'
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
	movlw h'00'
	movwf PORTB
	call LCD_Envia
	movlw h'00'
	movwf PORTB
	call LCD_Envia
	movlw h'00'
	movwf PORTB
	call LCD_Envia
	movlw h'00'
	movwf PORTB
	call LCD_Envia
	call LCD_Linea2
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
	movlw h'00'
	movwf PORTB
	call LCD_Envia
	movlw h'00'
	movwf PORTB
	call LCD_Envia	
	movlw h'00'
	movwf PORTB
	call LCD_Envia
	movlw h'00'
	movwf PORTB
	call LCD_Envia
	movlw h'00'
	movwf PORTB
	call LCD_Envia
	movlw h'00'
	movwf PORTB
	call LCD_Envia	
	movlw h'00'
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
	return