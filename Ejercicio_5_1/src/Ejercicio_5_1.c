/*
 ============================================================================
 Name        : Ejercicio_5_1.c
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

	int numeros[5];
	int suma;

	suma = 0;

	for(int i=0;i<5;i++){
		printf("Ingrese un numero: ");
		scanf("%d", &numeros[i]);

		suma=suma+numeros[i];
	}

	printf("Los numeros ingresados son: ");
	for(int i=0;i<5;i++){
		if(numeros[i]<5){
			printf("%d, ", numeros[i]);
		}else{
			printf("%d", numeros[i]);
		}
	}

	printf("\nLa suma de los numeros ingresados es: %d", suma);

	return EXIT_SUCCESS;
}
