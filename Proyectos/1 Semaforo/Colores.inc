tmp equ 0x20

Rojo_Verde
	movlw h'65'; Colores Rojo_Verde
	movwf PORTB ;Lo pasa al puerto B
	call R_V_R ;Llama al parpadeo
	return
Rojo_Amarillo
	movlw h'64'; Colores Rojo_Amarillo
	movwf PORTB
	call R_A
	return
Verde_Rojo
	movlw h'56'; Colores Verde_Rojo
	movwf PORTB
	call R_V_R
	return
Amarillo_Rojo
	movlw h'46'; Colores Amarillo_Rojo
	movwf PORTB
	call A_R
	return