/*
 ============================================================================
 Name        : Ejercicio_2_1.c
 Author      : Pablo Guillermo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	float nro;
	float total;
	float promedio;

	total=0;

	for(int i=0;i<5;i++){
		printf("ingrese un numero: ");
		scanf("%f", &nro);
		total=total+nro;
	}

	promedio=total/5;

	printf("El promedio es: %.2f", promedio);

	return EXIT_SUCCESS;
}
