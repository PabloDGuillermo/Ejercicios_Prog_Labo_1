/*
 * conversiones.c
 *
 *  Created on: 8 sep. 2022
 *      Author: pablo
 */


float celsiusAFarenheit(float temperaturaIngresada){
	float convertida;

	convertida = temperaturaIngresada * 1.8 +32;

	return convertida;
}

float farenheitACelsius(float temperaturaIngresada){
	float convertida;

	convertida = (temperaturaIngresada - 32) * 0.5556;


	return convertida;
}
