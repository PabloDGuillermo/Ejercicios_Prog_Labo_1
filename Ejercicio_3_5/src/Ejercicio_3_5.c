/*
 ============================================================================
 Name        : Ejercicio_3_5.c
 Author      : Pablo Guillermo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Sumar1(int num1, int num2);
int Sumar2(void);
void Sumar3(int, int);
void Sumar4(void);

int main(void) {
	setbuf(stdout,NULL);

	int opcion;
	int numero1;
	int numero2;
	int resultado;

	printf("1 - Pasar numeros por parametro y devolver resultado por retorno\n"
			"2 - No pasar parametros y devolver resultado por retorno\n"
			"3 - Pasar numeros por parametro y mostrar resultado dentro de la funcion\n"
			"4 - No pasar ningun parametro y mostrar resultado dentro de la funcion\n"
			"¿Que opcion desea utilizar?: ");
	scanf("%d", &opcion);

	switch(opcion){
	case 1:
		printf("Ingrese el primer numero: ");
		scanf("%d", &numero1);
		printf("Ingrese el segundo numero: ");
		scanf("%d", &numero2);

		resultado = Sumar1(numero1, numero2);

		printf("El resultado es: %d", resultado);
		break;

	case 2:
		resultado=Sumar2();
		printf("El resultado es: %d", resultado);
		break;

	case 3:
		printf("Ingrese el primer numero: ");
		scanf("%d", &numero1);
		printf("Ingrese el segundo numero: ");
		scanf("%d", &numero2);
		Sumar3(numero1, numero2);
		break;

	case 4:
		Sumar4();
		break;

	default:
	printf("La proxima elegi alguna opcion valida y no me rompas el programa, zapallo");
	}



	return EXIT_SUCCESS;
}

int Sumar1(int num1, int num2){
	int resultado;

	resultado=num1+num2;

	return resultado;
}

int Sumar2(void){
	int resultado;
	int num1;
	int num2;

	printf("Ingrese el primer numero: ");
	scanf("%d", &num1);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &num2);

	resultado=num1+num2;

	return resultado;
}

void Sumar3(int num1, int num2){

	int resultado;

	resultado=num1+num2;

	printf("El resultado es: %d", resultado);

}

void Sumar4(void){

	int resultado;
	int num1;
	int num2;

	printf("Ingrese el primer numero: ");
	scanf("%d", &num1);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &num2);

	resultado=num1+num2;

	printf("El resultado es: %d", resultado);
}
