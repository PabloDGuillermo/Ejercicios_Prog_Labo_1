/*
 ============================================================================
 Name        : Ejercicio_4_1.c
 Author      : Pablo Guillermo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int pedirEntero(void);

int main()
{
	setbuf(stdout,NULL);

    int numero;
    int factorial;

    factorial = 1;

    numero = pedirEntero();

    for(int i=0;i<numero;i++){
        factorial = factorial * (i+1);
    }

    printf("El factorial de %d es: %d", numero, factorial);

    return 0;
}

int pedirEntero(void){
	int entero;

	printf("Ingrese un numero entero: ");
	scanf("%d", &entero);

	return entero;
}
