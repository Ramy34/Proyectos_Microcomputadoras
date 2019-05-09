DIPSWICH
	btfss PORTD, h'00' ;Revisa el estado del Dip Switch
	goto CERO
	goto UNO
Regreso
	return

CERO ;Voltimetro
	movlw h'C1' ;Configuración del convertidor con entrada A0
	call Convertidor
	call CHD
	call CHA
	call Comparador_Vol
	call LCD_Inicializa
	call MENSAJE_1
	call LCD_Linea2
	call MENSAJE_2
	goto Regreso
UNO ;Termometro
	movlw h'D9' ;Configuración del convertidor con entrada A3
	call Convertidor
	call TEMP
	call CHA
	call Comparador_Tem
	call LCD_Inicializa
	call MENSAJE_3
	call LCD_Linea2
	call MENSAJE_4
	goto Regreso