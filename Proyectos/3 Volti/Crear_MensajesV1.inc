CREATE_1VSI
	bcf PORTD,h'06' ;Pone RS = 0 -> ERS00 0000
	movlw h'40' ;Pasamos h'40' a w  w = 40h  Escribiremos en la posición 0
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	;Escribe el caracter
	bsf PORTD,h'06' ;Pone RW = 1 -> ERSRW0 0000
	movlw h'03' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'02' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'02' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1E' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'10' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'10' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'10' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'10' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	return

CREATE_1VII
	bcf PORTD,h'06' ;Pone RS = 0 -> ERS00 0000
	movlw h'50' ;Pasamos h'48' a w  w = 48h  Escribiremos en la posición 0
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	;Escribe el caracter
	bsf PORTD,h'06' ;Pone RW = 1 -> ERSRW0 0000

	movlw h'10' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'10' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'10' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'10' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'11' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	return

CREATE_1VSD
	bcf PORTD,h'06' ;Pone RS = 0 -> ERS00 0000
	movlw h'60' ;Pasamos h'48' a w  w = 48h  Escribiremos en la posición 0
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	;Escribe el caracter
	bsf PORTD,h'06' ;Pone RW = 1 -> ERSRW0 0000

	movlw h'18' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'08' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'08' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'0F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'01' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'01' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'01' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'01' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	return

CREATE_1VID
	bcf PORTD,h'06' ;Pone RS = 0 -> ERS00 0000
	movlw h'70' ;Pasamos h'48' a w  w = 48h  Escribiremos en la posición 0
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	;Escribe el caracter
	bsf PORTD,h'06' ;Pone RW = 1 -> ERSRW0 0000

	movlw h'01' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'01' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'01' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'01' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'11' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	return