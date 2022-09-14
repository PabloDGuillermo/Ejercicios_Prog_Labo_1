/*
 ============================================================================
 Name        : Ejercicio_2_4.c
 Author      : Pablo Guillermo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    int contP;

    contP=0;

    for(int i=0;i<5;i++){
        printf("ingrese una letra: ");
        scanf("%c", &letra);
        fflush(stdin);

        if(letra=='p'){
            contP++;
        }
    }

    if(contP!=0){
        printf("La cantidad de letras 'p' que se introdujeron es de: %d", contP);
    }else{
        printf("No se introdujeron letras 'p'");
    }
    return 0;
}

