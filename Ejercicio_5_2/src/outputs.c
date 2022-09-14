/*
 * outputs.c
 *
 *  Created on: 9 sep. 2022
 *      Author: pablo
 */



void listarNumerosIngresados(int nros[]){
	printf("Los numeros ingresados son: ");
	for(int i=0;i<10;i++){
		printf("%d ", nros[i]);
	}
	printf("\n");
}

void listarNumerosPares(int nros[]){
	printf("Los numeros pares son: ");
	for(int i=0;i<10;i++){
		if(esPar(nros[i])==0){
			printf("%d ", nros[i]);
		}
	}
	printf("\n");
}

void listarNumerosPosicionesImpares(int nros[]){
	printf("Los numeros de las posiciones impares son: ");
	for(int i=1;i<10;i++){
		if(esPar(i)==-1){
			printf("%d ", nros[i]);
		}
	}
	printf("\n");
}
