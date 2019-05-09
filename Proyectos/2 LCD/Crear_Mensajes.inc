CREATE_0
	bcf PORTD,h'06' ;Pone RS = 0 -> ERS00 0000
	movlw h'50' ;Pasamos h'40' a w  w = 40h  Escribiremos en la posición 0
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	;Escribe el caracter
	bsf PORTD,h'06' ;Pone RW = 1 -> ERSRW0 0000

	movlw h'00' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'03' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'07' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'0E' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1D' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'19' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1D' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'0F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	return

CREATE_1
	bcf PORTD,h'06' ;Pone RS = 0 -> ERS00 0000
	movlw h'48' ;Pasamos h'40' a w  w = 40h  Escribiremos en la posición 0
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	;Escribe el caracter
	bsf PORTD,h'06' ;Pone RW = 1 -> ERSRW0 0000
	
	movlw h'00' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'18' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'10' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'10' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	return
CREATE_2
	bcf PORTD,h'06' ;Pone RS = 0 -> ERS00 0000
	movlw h'40' ;Pasamos h'40' a w  w = 40h  Escribiremos en la posición 0
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	;Escribe el caracter
	bsf PORTD,h'06' ;Pone RW = 1 -> ERSRW0 0000

	movlw h'00' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'06' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'03' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'01' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	return

CREATE_3
	bcf PORTD,h'06' ;Pone RS = 0 -> ERS00 0000
	movlw h'40' ;Pasamos h'40' a w  w = 40h  Escribiremos en la posición 0
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	;Escribe el caracter
	bsf PORTD,h'06' ;Pone RW = 1 -> ERSRW0 0000

	movlw h'00' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'18' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1E' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1E' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'17' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'03' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'07' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'16' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	return

CREATE_4
	bcf PORTD,h'06' ;Pone RS = 0 -> ERS00 0000
	movlw h'40' ;Pasamos h'40' a w  w = 40h  Escribiremos en la posición 0
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	;Escribe el caracter
	bsf PORTD,h'06' ;Pone RW = 1 -> ERSRW0 0000

	movlw h'07' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'03' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'01' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'00' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'00' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'00' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'00' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'00' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	return

CREATE_5
	bcf PORTD,h'06' ;Pone RS = 0 -> ERS00 0000
	movlw h'40' ;Pasamos h'40' a w  w = 40h  Escribiremos en la posición 0
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	;Escribe el caracter
	bsf PORTD,h'06' ;Pone RW = 1 -> ERSRW0 0000

	movlw h'00' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'16' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1C' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'0E' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'07' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'03' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'01' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	return

CREATE_6
	bcf PORTD,h'06' ;Pone RS = 0 -> ERS00 0000
	movlw h'40' ;Pasamos h'40' a w  w = 40h  Escribiremos en la posición 0
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	;Escribe el caracter
	bsf PORTD,h'06' ;Pone RW = 1 -> ERSRW0 0000

	movlw h'00' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'0D' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'07' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'0E' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1C' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'18' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'10' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	return

CREATE_7
	bcf PORTD,h'06' ;Pone RS = 0 -> ERS00 0000
	movlw h'40' ;Pasamos h'40' a w  w = 40h  Escribiremos en la posición 0
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	;Escribe el caracter
	bsf PORTD,h'06' ;Pone RW = 1 -> ERSRW0 0000

	movlw h'1C' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'18' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'10' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'00' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'00' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'00' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'00' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'00' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	return

CREATE_U
	bcf PORTD,h'06' ;Pone RS = 0 -> ERS00 0000
	movlw h'40' ;Pasamos h'40' a w  w = 40h  Escribiremos en la posición 0
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	;Escribe el caracter
	bsf PORTD,h'06' ;Pone RW = 1 -> ERSRW0 0000

	movlw h'04' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'0A' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'0A' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'0A' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'0A' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'04' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	return

CREATE_Casa
	bcf PORTD,h'06' ;Pone RS = 0 -> ERS00 0000
	movlw h'40' ;Pasamos h'40' a w  w = 40h  Escribiremos en la posición 0
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	;Escribe el caracter
	bsf PORTD,h'06' ;Pone RW = 1 -> ERSRW0 0000

	movlw h'04' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'0A' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'11' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1F' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'1B' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'11' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'15' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando

	movlw h'15' 
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	return