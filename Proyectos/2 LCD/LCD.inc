val1 equ 0x30
val2 equ 0x31

LCD_Inicializa
	bcf PORTD,h'06' ;Pone RS = 0 -> ERS00 0000
	movlw 0x38      ; 8 BITS - DOS RENGLONES
    movwf PORTB
 	call LCD_Comando
	movlw h'01' ;Pasamos el h'01' a w   w = 0ch  Limpia la pantalla
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	movlw h'0C' ;Pasamos el h'0C' a w   w = 01h  Nos coloca el primer renglón primera columna
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	movlw h'3C' ;Pasamos el h'3C' a w   w = 3Ch  Da de alta el cursor
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	bsf PORTD,h'06' ;Pone RS = 1
	return

LCD_Comando
	bsf PORTD,h'07' ;Pone E = 1 -> ERS00 0000
	call DELAY ;Retardos
	call DELAY
	bcf PORTD,h'07' ;Pone E = 0
	call DELAY
	return

LCD_Envia
	bsf PORTD,h'06' ;Pone RS = 1
	call LCD_Comando
	return

LCD_Linea2
	bcf PORTD, h'06' ;Pone RS = 0
	movlw h'C0' ;Inicia en el segundo renglon primera columna
	movwf PORTB
	call LCD_Comando
	return

DELAY
	movlw .150
	movwf val2

ciclo
	movlw .150
	movwf val1

ciclo2
	decfsz val1,h'01'
	goto ciclo2
	decfsz val2,h'01'
	goto ciclo
	return

LCD_Desplazamiento_D
	bcf PORTD,h'06' ;Pone RS = 0 -> ERS00 0000
	movlw h'01' ;Pasamos el h'01' a w   w = 0ch  Limpia la pantalla
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	movf val3,w ;Pasamos el h'0C' a w   w = 01h  Nos coloca el primer renglón primera columna
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	movlw h'3C' ;Pasamos el h'01' a w   w = 0ch  Da de alta el cursor
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	bsf PORTD,h'06' ;Pone RS = 1
	return
LCD_Desplazamiento_Dinf
	bcf PORTD,h'06' ;Pone RS = 0 -> ERS00 0000
	movf val5,w ;Pasamos el h'0C' a w   w = 01h  Nos coloca el primer renglón primera columna
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	bsf PORTD,h'06' ;Pone RS = 1
	return

LCD_Desplazamiento_I
	bcf PORTD,h'06' ;Pone RS = 0 -> ERS00 0000
	movlw h'01' ;Pasamos el h'01' a w   w = 0ch  Limpia la pantalla
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	movf val4,w ;Pasamos el h'0C' a w   w = 01h  Nos coloca el primer renglón primera columna
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	movlw h'3C' ;Pasamos el h'01' a w   w = 0ch  Da de alta el cursor
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	bsf PORTD,h'06' ;Pone RS = 1
	return

LCD_Desplazamiento_Iinf
	bcf PORTD,h'06' ;Pone RS = 0 -> ERS00 0000
	movf val6,w ;Pasamos el h'0C' a w   w = 01h  Nos coloca el primer renglón primera columna
	movwf PORTB ; PortB <- w
	call LCD_Comando ;Llamanos a la rutina comando
	bsf PORTD,h'06' ;Pone RS = 1
	return