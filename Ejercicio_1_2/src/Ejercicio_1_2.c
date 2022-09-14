/*
 ============================================================================
 Name        : Ejercicio_1_2.c
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
	int tercerNumero;
	int numeroMaximo;
	char queVariableEs;

	printf("Primer numero: ");
	scanf("%d", &primerNumero);
	printf("Segundo numero: ");
	scanf("%d", &segundoNumero);
	printf("Tercer numero: ");
	scanf("%d", &tercerNumero);

	if(primerNumero > segundoNumero && primerNumero > tercerNumero){
		numeroMaximo = primerNumero;
		queVariableEs = '1';
	}
	else if(segundoNumero > tercerNumero){
		numeroMaximo = segundoNumero;
		queVariableEs = '2';
	}
	else{
		numeroMaximo = tercerNumero;
		queVariableEs = '3';
	}

	printf("el numero maximo es: %d \ny es la variable %c", numeroMaximo, queVariableEs);
	return EXIT_SUCCESS;
}
