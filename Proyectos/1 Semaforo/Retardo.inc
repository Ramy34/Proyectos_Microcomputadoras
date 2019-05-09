;Variables
val1 equ 0x30
val2 equ 0x31
val3 equ 0x32
val4 equ 0x33
val5 equ 0x34
;Constantes
cte1 equ h'0A'
cte2 equ h'10' 
cte3 equ h'ff'

Delay
	movlw cte1
	movwf val4

Ciclo
	movlw cte2
	movwf val3

Ciclo2
	movf  val5,w
	movwf val2

Ciclo3
	movlw cte3
	movwf val1

Ciclo4
	decfsz val1,h'01'
	goto Ciclo4
	decfsz val2,h'01'
	goto Ciclo3
	decfsz val3,h'01'
	goto Ciclo2
	movf tmp,w
	xorwf PORTB
	decfsz val4,h'01'
	goto Ciclo
	return