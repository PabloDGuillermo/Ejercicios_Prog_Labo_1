/*
 ============================================================================
 Name        : Ejercicio_3_4.c
 Author      : Pablo Guillermo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pedirEntero(int * num);

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int esValido;

	esValido = pedirEntero(&numero);

	if(esValido==0){
		printf("El numero ingresado es: %d", numero);
	}else{
		printf("El numero ingresado esta fuera del rango");
	}



	return EXIT_SUCCESS;
}

int pedirEntero(int * num){
	int flag;

	flag=0;

	printf("Ingrese un numero entero: ");
	scanf("%d", &*num);

	if(*num<0 || *num>10){
		flag=1;
	}

	return flag;
}
