/*
 * doers.c
 *
 *  Created on: 9 sep. 2022
 *      Author: pablo
 */

#include "validaciones.h"

int sumarPares(int numero[]){
	int suma;

	suma=0;

	for(int i=0;i<10;i++){
		if(esPar(numero[i])==0){
			suma = suma+numero[i];
		}
	}
	return suma;
}


int mayorImpar(int numero[]){
	int mayor;


	mayor=-1001;

	for(int i=0; i<10;i++){
		if(esPar(numero[i])==-1){
			if(mayor<numero[i]){
				mayor=numero[i];
			}
		}
	}

	return mayor;
}
