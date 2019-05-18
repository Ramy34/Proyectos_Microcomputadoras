;Proyecto 4
	processor 16f877
	include<p16f877.inc>
	__CONFIG _FOSC_HS & _WDTE_OFF & _PWRTE_ON & _CP_OFF

	org 0
	goto Inicio
	org 5
Inicio
	call Configurar_Puertos
Recibe
	BTFSS PIR1,RCIF ;Comprueba la recepción de datos
	GOTO Recibe
	MOVF RCREG, W ;Pasar el dato recibido a W
Seleccion
	movlw h'77' ;Código ASCII del w
	xorwf RCREG,W
	btfsc STATUS,H'02'
	goto Adelante

	movlw h'61' ;Código ASCII del a
	xorwf RCREG,W
	btfsc STATUS,H'02'
	goto Derecha

	movlw h'71' ;Código ASCII del q
	xorwf RCREG,W
	btfsc STATUS,H'02'
	goto Parar

	movlw h'64' ;Código ASCII del d
	xorwf RCREG,W
	btfsc STATUS,H'02'
	goto Izquierda
	
	movlw h'73' ;Código ASCII del s
	xorwf RCREG,W
	btfsc STATUS,H'02'
	goto Atras

Adelante ;Hacia adelante
	movlw b'1010'; M1=Derecha M2=Derecha
	movwf PORTB
	call retardo       
	goto Recibe
Derecha ;Hacia la derecha
	movlw b'1001' ;M1=Derecha M2=Izquierda
	movwf PORTB
	call retardo
	goto Recibe
Parar ;Para
	movlw h'00' ;M1=paro M2=paro
	movwf PORTB
	goto Recibe
Izquierda ;Hacia la izquierda 
	movlw b'0110' ;M1=Izquierda M2=Dercha
	movwf PORTB
	call retardo
	goto Recibe
Atras ;Hacia atrás
	movlw b'0101'  ;M1=Izquierda M2=Izquierda
	movwf PORTB
	call retardo  
	goto Recibe

	include<C:\Users\ramse\Downloads\4_Carrito\Configurar_Puertos.inc>
	include<C:\Users\ramse\Downloads\4_Carrito\Retardo.inc>
END