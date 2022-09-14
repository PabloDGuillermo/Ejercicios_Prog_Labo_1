/*
 ============================================================================
 Name        : Ejercicio_3_3.c
 Author      : Pablo Guillermo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pedirEntero(void);

int main(void) {
	setbuf(stdout, NULL);

	int numero;

	numero = pedirEntero();

	printf("El numero ingresado es: %d", numero);

	return EXIT_SUCCESS;
}

int pedirEntero(void){
	int entero;

	printf("Ingrese un numero entero: ");
	scanf("%d", &entero);

	return entero;
}
