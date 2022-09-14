/*
 ============================================================================
 Name        : Ejercicio_3_2.c
 Author      : Pablo Guillermo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int esPar(int num);

int main(void) {
	setbuf(stdout, NULL);

	int numero;

	printf("Ingrese un numero entero: ");
	scanf("%d", &numero);

	if(esPar(numero)==1){
		printf("El numero ingresado es par");
	}else if(esPar(numero)==0){
		printf("El numero ingresado no es par");
	}


	return EXIT_SUCCESS;
}

int esPar(int num){
	int esPar;

	esPar=1;

	if(num % 2 != 0){
		esPar=0;
	}

	return esPar;
}
