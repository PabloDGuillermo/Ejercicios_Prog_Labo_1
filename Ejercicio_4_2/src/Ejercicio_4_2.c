/*
 ============================================================================
 Name        : Ejercicio_4_2.c
 Author      : Pablo Guillermo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"
#include "inputs.h"
#include "conversiones.h"



int main(void) {
	setbuf(stdout,NULL);

	float temperatura;
	char opcion;
	char seguir;
	float temperaturaConvertida;


	do{
		printf("Elija entre Celsius o Farenheit (c/f): ");
		scanf("%c", &opcion);
		fflush(stdin);

		switch(opcion){
		case 'c':
			temperatura = getTemperatura();
			if(validarTemperatura(temperatura, opcion)==0){
				printf("La temperatura ingresada en Celsius es: %.2f\n", temperatura);
				printf("Quiere convertirla a Farenheit? (s/n): ");
				scanf("%c", &opcion);
				fflush(stdin);
				if(opcion=='s'){
					temperaturaConvertida = celsiusAFarenheit(temperatura);
				}
				printf("La temperatura convertida es: %.2f\n", temperaturaConvertida);
			}else{
				printf("La temperatura pasó el punto de congelación o ebullición\n");
			}
			break;

		case 'f':
			temperatura = getTemperatura();
			if(validarTemperatura(temperatura, opcion)==0){
				printf("La temperatura ingresada en Farenheit es: %.2f\n", temperatura);
				printf("Quiere convertirla a Celsius? (s/n): ");
				scanf("%c", &opcion);
				fflush(stdin);
				if(opcion=='s'){
					temperaturaConvertida = farenheitACelsius(temperatura);
				}
				printf("La temperatura convertida es: %.2f\n", temperaturaConvertida);
			}else{
				printf("La temperatura pasó el punto de congelación o ebullición\n");
			}
			break;
		}



		printf("Quiere ingresar otra temperatura? (s/n): ");
		scanf("%c", &seguir);
		fflush(stdin);


	}while(seguir=='s');

	return EXIT_SUCCESS;
}



