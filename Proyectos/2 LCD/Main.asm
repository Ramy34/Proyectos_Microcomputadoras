processor 16f877
include<p16f877.inc>
__CONFIG _FOSC_HS & _WDTE_OFF & _PWRTE_ON & _CP_OFF
val3 equ 0x32
val4 equ 0x33
val5 equ 0x34
val6 equ 0x35
;Codigo
	org 0
	goto INICIO
	org 5
INICIO
	call Configurar_Puertos
	movlw h'80'
	movwf val3
	movlw h'C0'
	movwf val5
	movlw h'8F'
	movwf val4
	movlw h'CF'
	movwf val6
START
	call DIPSWICH ;Llamamos a la rutina del dipswitch
	goto START
	include<C:\Users\ramse\Downloads\LCD\LCD.inc>
	include<C:\Users\ramse\Downloads\LCD\DSLCD.inc>
	include<C:\Users\ramse\Downloads\LCD\mensajes.inc>
	include<C:\Users\ramse\Downloads\LCD\Crear_Mensajes.inc>
	include<C:\Users\ramse\Downloads\LCD\Configurar_Puertos.inc>
	end