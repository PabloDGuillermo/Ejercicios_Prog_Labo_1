/*
 ============================================================================
 Name        : Ejercicio_2_3.c
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
    int cantPasajeros;
    int nroCliente;
    char estadoCivil;
    int edad;
    int temperatura;
    char genero;
    int contViudos;
    int nroClienteSolteraJoven;
    int edadSolteraJoven;
    int total;
    float viajeConDescuento;
    int contador;
    int cantPasajerosMayores;

    //inicializo contadores
    contViudos=0;
    total=0;
    edadSolteraJoven=300;
    cantPasajerosMayores=0;

    printf("Cuantos pasajeros van a viajar? (pueden hacerlo entre 1 y 100): ");
    scanf("%d", &cantPasajeros);
    fflush(stdin);
    while(cantPasajeros<1 || cantPasajeros>100){
        printf("ERROR. La cantidad debe ser entre 1 y 100: ");
        scanf("%d", &cantPasajeros);
        fflush(stdin);
    }

    // > <
    for(int i=0;i<cantPasajeros;i++){
        nroCliente=i+1; //tomo el nro de nro de cliente
        contador++; //cuento a la cantidad de personas que viajan

        //pido el estado civil
        printf("Ingrese el estado civil ('s' para soltero/a, 'c' para casado/a, 'v' para viudo/a): ");
        scanf("%c", &estadoCivil);
        fflush(stdin);
        //valido el estado civil
        while(estadoCivil!='s' && estadoCivil!='c' && estadoCivil!='v'){
            printf("ERROR. Ingrese el estado civil ('s' para soltero/a, 'c' para casado/a, 'v' para viudo/a): ");
            scanf("%c", &estadoCivil);
            fflush(stdin);
        }

        //pido la edad
        printf("Ingrese la edad (mayor de 17): ");
        scanf("%d", &edad);
        //valido la edad
        while(edad<17){
            printf("ERROR. Ingrese la edad (mayor de 17): ");
            scanf("%d", &edad);
        }

        //pido la temperatura corporal
        printf("Ingrese la temperatura corporal (entre 32 y 37 grados): ");
        scanf("%d", &temperatura);
        //valido la temperatura corporal
        while(temperatura<32 || temperatura>37){
            printf("ERROR. Vaya a un médico o ingrese una temperatura corporal entre 32 y 37 grados: ");
            scanf("%d", &temperatura);
        }
        fflush(stdin);

        //pido el genero
        printf("Ingrese su genero ('m', 'f' u 'o'[no binario]): ");
        scanf("%c", &genero);
        fflush(stdin);
        //valido el genero
        while(genero!='f' && genero!='m' && genero!='o'){
            printf("ERROR. Ingrese un genero correcto ('m', 'f' u 'o'[no binario]): ");
            scanf("%c", &genero);
            fflush(stdin);
        }

        //cuento a los viudos
        if(estadoCivil=='v'){
            contViudos++;
        }

        //identifico a la soltera mas joven
        if(genero=='f' && estadoCivil=='s' && edad<edadSolteraJoven){
            nroClienteSolteraJoven=nroCliente;
            edadSolteraJoven=edad;
        }

        //cuento la cantidad de pasajeros mayores de 60 años
        if(edad>60){
            cantPasajerosMayores++;
        }
    }

    //calculo el total del viaje
    total=contador*600;

    //calculo el descuento
    if(cantPasajerosMayores>(contador/2)){
        viajeConDescuento=(float)total-(total*.25);
    }

    //muestro los resultados
    if(contViudos>0){
        printf("La cantidad de pasajeros viudos de mas de 60 años es: %d\n", contViudos);
    }
    if(edadSolteraJoven<300){
        printf("La mujer soltera mas joven es la cliente %d y tiene %d años\n", nroClienteSolteraJoven, edadSolteraJoven);
    }
    printf("El viaje total sin descuento sale: %d\n", total);
    if(cantPasajerosMayores>(contador/2)){
        printf("El viaje total con descuento sale: %.2f\n", viajeConDescuento);
    }

    return 0;
}
