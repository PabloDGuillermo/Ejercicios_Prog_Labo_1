/*
 ============================================================================
 Name        : Bibliotecas.c
 Author      : Pablo Guillermo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libreriaUTN.h"


int main()
{
	setbuf(stdout,NULL);

    int num;        //Creo la variable del numero que necesito
    int* pNum;      //Creo un puntero para guardar la dirección de memoria de la variable del numero que necesito
    int error;      //Creo una variable para guardar el retorno de la función para chequear el error

    pNum=&num;      //Le asigno la dirección de memoria de la variable del número al puntero

    error=utn_GetNumero(pNum, "Ingrese un numero del 0 al 100: ", "ERROR. Número fuera de rango.", "ERROR. No ingresó un número dentro del rango", 0, 100, 3);

    printf("el retorno es: %d y el numero ingresado es: %d", error, num); //Verifico resultados

    return 0;
}

