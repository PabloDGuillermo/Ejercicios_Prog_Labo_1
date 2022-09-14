/*
 ============================================================================
 Name        : Ejercicio_2_2.c
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

	int num;
	int contPar;
	int menor;
	int mayorPar;
	int sumaPos;
	int prodNeg;
	int flag;

	contPar=0;
	menor=1000000000;
	mayorPar=-100000000;
	sumaPos=0;
	prodNeg=1;
	flag=0;

	for(int i=0;i<10;i++){
		printf("Ingrese un numero: ");
		scanf("%d", &num);

		//chequeo si es par o impar
		if(num % 2 == 0){
			contPar++;
		}
		//chequeo si el nro es menor
		if(num<menor){
			menor=num;
		}

		//chequeo cual es el par mayor
		if(num % 2== 0 && mayorPar<num){
			mayorPar=num;
		}

		//sumo los positivos
		if(num>0){
			sumaPos=sumaPos+num;
		}

		//saco el producto de los negativos
		if(num<0){
			prodNeg=prodNeg*num;
			flag=1;
		}
	}

	if(contPar==0){
		printf("La cantidad de pares ingresados es: %d\n", contPar);
		printf("El mayor par ingresado es: %d\n", mayorPar);
	}else{
		printf("No se ingresaron pares\n");
	}

	printf("El menor numero ingresado es: %d", menor);

	if(sumaPos==0){
		printf("La suma de los positivos es: %d\n", sumaPos);
	}else{
		printf("No se ingresaron positivos");
	}

	if(flag==1){
		printf("El producto de los negativos es: %d\n", prodNeg);
	}else{
		printf("No se ingresaron negativos\n");
	}


	return EXIT_SUCCESS;
}
