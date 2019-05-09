	processor 16f877  
	include<p16f877.inc> 
__CONFIG _FOSC_HS & _WDTE_OFF & _PWRTE_ON & _CP_OFF	
	org 0
	goto inicio
	org 5
inicio
	call Configurar_Puertos
start
	call Rojo_Verde

	call Rojo_Amarillo

	call Verde_Rojo

	call Amarillo_Rojo
	
	goto start
	include<C:\Users\ramse\Downloads\1_Semaforo\Configurar_Puertos.inc>
	include<C:\Users\ramse\Downloads\1_Semaforo\Colores.inc>
	include<C:\Users\ramse\Downloads\1_Semaforo\Retardo.inc>
	include<C:\Users\ramse\Downloads\1_Semaforo\parpadeo.inc>
	end