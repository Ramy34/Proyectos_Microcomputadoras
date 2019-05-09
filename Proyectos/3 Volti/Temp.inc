;Convertidor de temperatura
TEMP
       clrf Centenas
       clrf Decenas
       clrf Unidades
      
       movf ADRESH,W   
       addwf ADRESH,W     ;Dupilca el valor de ADRESH para 
       ;obtener un valor de temperatura real aprox
       movwf Resto        ;Guarda el valor de ADRESH en Resto  
	    
       ;Comienza el proceso de otención de valores BCD 
       ;para Centenas, Decenas y unidades atraves de restas
       ;sucesivas.
CENTENAS1
       movlw d'100'      ;W=d'100'
       subwf Resto,W     ;Resto - d'100' (W)
       btfss STATUS,C    ;Resto menor que d'100'?
       goto DECENAS1     ;SI
       movwf Resto       ;NO, Salva el resto
       incf Centenas,1   ;Incrementa el contador de centenas BCD
       goto CENTENAS1    ;Realiza otra resta
DECENAS1
       movlw d'10'       ;W=d'10'
       subwf Resto,W     ;Resto - d'10' (W)
       btfss STATUS,C    ;Resto menor que d'10'?
       goto UNIDADES1    ;Si
       movwf Resto       ;No, Salva el resto
       incf Decenas,1    ;Incrementa el contador de centenas BCD
       goto DECENAS1     ;Realiza otra resta
UNIDADES1
       movf Resto,W      ;El resto son la Unidades BCD
       movwf Unidades
       clrf Resto
OBTEN_ASCII
       movlw h'30' 
       iorwf Unidades,f      
       iorwf Decenas,f
       iorwf Centenas,f      
       return