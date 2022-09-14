/*
 ============================================================================
 Name        : Ejercicio_1_3.c
 Author      : Pablo Guillermo
 Version     : 2.0
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int primerNro;
	int segundoNro;
	int tercerNro;
	int nroDelMedio;

	printf("Ingrese el primer numero: ");
	scanf("%d", &primerNro);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &segundoNro);
	printf("Ingrese el tercer numero: ");
	scanf("%d", &tercerNro);

	//me fijo si no hay iguales
	if (primerNro == segundoNro || primerNro == tercerNro || segundoNro == tercerNro) {
		printf("No hay numero del medio");
	} else {

		if((primerNro<segundoNro && primerNro>tercerNro) || (primerNro>segundoNro && primerNro<tercerNro)){
			nroDelMedio=primerNro;
		}else if((segundoNro<primerNro && segundoNro>tercerNro) || (segundoNro>primerNro && segundoNro<tercerNro)){
			nroDelMedio=segundoNro;
		}else{
			nroDelMedio=tercerNro;
		}
		printf("El numero del medio es el: %d", nroDelMedio);
	}

	return EXIT_SUCCESS;
}
