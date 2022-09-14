/*
 ============================================================================
 Name        : Ejercicio_3_1.c
 Author      : Pablo Guillermo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int mostrarNumeroFlotante(float num);
int main(void) {
	setbuf(stdout, NULL);

	float numero;

	printf("Ingrese un numero decimal: ");
	scanf("%f", &numero);

	mostrarNumeroFlotante(numero);

	return EXIT_SUCCESS;

}

int mostrarNumeroFlotante(float num){

	printf("El numero flotante es: %.2f", num);


	return 0;
}
