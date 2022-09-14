/*
 * validaciones.c
 *
 *  Created on: 8 sep. 2022
 *      Author: pablo
 */


int validarTemperatura(float temperaturaIngresada, char opcion){
	int esValido;

	esValido=-1;

	switch(opcion){
	case 'c':
		if(temperaturaIngresada >0 && temperaturaIngresada <100){
			esValido=0;
		}
		break;

	case 'f':
		if(temperaturaIngresada >32 && temperaturaIngresada <212){
			esValido=0;
		}
		break;
	}

	return esValido;
}
