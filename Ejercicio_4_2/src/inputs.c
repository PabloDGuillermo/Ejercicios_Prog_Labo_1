/*
 * inputs.c
 *
 *  Created on: 8 sep. 2022
 *      Author: pablo
 */

#include <stdio.h>
#include <stdlib.h>

float getTemperatura(void){
	float temp;

	printf("Ingrese la temperatura: ");
	scanf("%f", &temp);
	fflush(stdin);

	return temp;
}
