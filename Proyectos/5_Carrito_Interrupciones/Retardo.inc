;Variables para el DELAY
	valor1 equ h'21'
	valor2 equ h'22'
	valor3 equ h'23'
	cte1 equ 10h 
	cte2 equ 50h
	cte3 equ 60h
	
retardo movlw cte1   ;Rutina que genera un DELAY
     	movwf valor1
tres 	movwf cte2
     	movwf valor2
dos  	movlw cte3
     	movwf valor3
uno  	decfsz valor3 
     	goto uno 
     	decfsz valor2
     	goto dos
     	decfsz valor1   
     	goto tres
     	return