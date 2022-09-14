/*
 * inputs.c
 *
 *  Created on: 9 sep. 2022
 *      Author: pablo
 */

#include <stdlib.h>
#include <stdio.h>
#include "validaciones.h"

void getNumeros(int nros[], int len){
	int valido;

	for(int i=0;i<len;i++){
		printf("Ingrese un numero: ");
		scanf("%d", &nros[i]);
		valido=validarRango(nros, i);
		while(valido==-1){
			printf("El numero está fuera de rango, ingrese otro numero: ");
			scanf("%d", &nros[i]);
			valido=validarRango(nros, i);
		}
	}

}
