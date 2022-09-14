/*
 * validaciones.c
 *
 *  Created on: 9 sep. 2022
 *      Author: pablo
 */


int validarRango(int numero[], int ind){
	int esValido;

	esValido = -1;

	if(numero[ind]>=-1000 && numero[ind]<=1000){
		esValido=0;
	}


	return esValido;
}

int esPositivo(int numero[], int ind){
	int esPositivo;

	if(numero[ind]>0){
		esPositivo=1;
	}else if(numero[ind]<0){
		esPositivo=-1;
	}else{
		esPositivo=0;
	}

	return esPositivo;
}

int esPar(int numero){
	int par;

	par = -1;

	if(numero % 2 == 0){
		par=0;
	}

	return par;
}
