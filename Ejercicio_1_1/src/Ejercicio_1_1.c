/*
 ============================================================================
 Name        : Ejercicio_1_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int primerNumero;
	int segundoNumero;
	int resultado;

	printf("Ingrese el primer numero: ");
	scanf("%d", &primerNumero);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &segundoNumero);

	resultado = primerNumero + segundoNumero;

	printf("La suma entre %d y %d da como resultado %d", primerNumero, segundoNumero, resultado);

	return EXIT_SUCCESS;
}
