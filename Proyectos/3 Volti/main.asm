processor 16f877
include<p16f877.inc>
__CONFIG _FOSC_HS & _WDTE_OFF & _PWRTE_ON & _CP_OFF
;Variables y constantes
T	equ h'20' ;Variable temporal para el carry
E	equ h'21' ;Registro donde se guarda el resultado de las restas
Za	equ h'22' ;Registro donde se almacena la multiplicacion
M	equ h'23' ;Conteo para la multiplicación
PA	equ h'24' ;Parte alta del adresh
PB	equ h'25' ;Parte baja del adresh
Tem	equ h'26' ;Temporal del adresh
val0 equ h'30' ;Registro para los retardos
val1 equ h'31' ;Registro para los retardos
val2 equ h'32' ;Registro para los retardos
Unidades equ h'33' ;Conversión del termométro unidades
Decenas equ h'34' ;Conversión del termométro decenas
Centenas equ h'35' ;Conversión del termométro centenas   
Resto equ 0x35 ;Aquí se guarda el resto del termometro
U	equ h'40' ;Conteo de la parte entera u.dc
L	equ h'41' ;Conteo de la partde decimal
L1	equ h'42' ;Conteo de la parte centecimal
HA	equ h'43' ;Parte alta del ascii
HB	equ h'44' ;Parte baja del ascii

H	equ h'00' ;Constante del valor del ADRESH
X	equ h'09' ;Constante para el xor


;Codigo
	org 0
	goto INICIO
	org 5
INICIO
	call Configurar_Puertos
START
	call DIPSWICH ;Llamamos a la rutina del dipswitch
	goto START
	include<C:\Users\ramse\Downloads\3_Volti\Cara.inc>
	include<C:\Users\ramse\Downloads\3_Volti\Temp.inc>
	include<C:\Users\ramse\Downloads\3_Volti\Comparador.inc>
	include<C:\Users\ramse\Downloads\3_Volti\Configurar_Puertos.inc>
	include<C:\Users\ramse\Downloads\3_Volti\Dipswitch.inc>
	include<C:\Users\ramse\Downloads\3_Volti\Convertidor.inc>
	include<C:\Users\ramse\Downloads\3_Volti\Multiplicacion.inc>
	include<C:\Users\ramse\Downloads\3_Volti\CHD.inc>
	include<C:\Users\ramse\Downloads\3_Volti\CHA.inc>
	include<C:\Users\ramse\Downloads\3_Volti\LCD.inc>
	include<C:\Users\ramse\Downloads\3_Volti\Retardo.inc>
	include<C:\Users\ramse\Downloads\3_Volti\Mensajes.inc>
	include<C:\Users\ramse\Downloads\3_Volti\Crear_MensajesT0.inc>
	include<C:\Users\ramse\Downloads\3_Volti\Crear_MensajesT16.inc>
	include<C:\Users\ramse\Downloads\3_Volti\Crear_MensajesT24.inc>
	include<C:\Users\ramse\Downloads\3_Volti\Crear_MensajesT32.inc>
	include<C:\Users\ramse\Downloads\3_Volti\Crear_MensajesT40.inc>
	include<C:\Users\ramse\Downloads\3_Volti\Crear_MensajesT56.inc>
	include<C:\Users\ramse\Downloads\3_Volti\Crear_MensajesV0.inc>
	include<C:\Users\ramse\Downloads\3_Volti\Crear_MensajesV1.inc>
	include<C:\Users\ramse\Downloads\3_Volti\Crear_MensajesV2.inc>
	include<C:\Users\ramse\Downloads\3_Volti\Crear_MensajesV3.inc>
	include<C:\Users\ramse\Downloads\3_Volti\Crear_MensajesV4.inc>
	include<C:\Users\ramse\Downloads\3_Volti\Crear_MensajesV5.inc>

	end