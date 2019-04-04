#include <stdio.h>
#include <stdlib.h>
#include "funcionesCalculo.h"
int llamarMenu(float numeroUno, float numeroDos);

int main(){
    int opcion=0;
    float numeroUno=0;
    float numeroDos=0;
    float suma=0;
    float resta=0;
    float multiplicacion=0;
    float division=0;
    long factorialA=0;
    long factorialB=0;

    llamarMenu(numeroUno, numeroDos);
    utn_getOption(&opcion,5,1,"\nIngrese Opcion: ","Numero invalido! Reingrese opcion: ", 10);
    while(opcion != 5){
        switch(opcion){
            case 1:
                utn_getNumber(&numeroUno,"\nIngrese numero 1: ","Numero invalido! Reingrese numero 1: ", 10);
                break;
            case 2:
                utn_getNumber(&numeroDos,"\nIngrese numero 2: ","Numero invalido! Reingrese numero 2: ", 10);
                break;
            case 3:
                utn_doMaths(numeroUno,numeroDos, &suma, &resta, &division, &multiplicacion, &factorialA, &factorialB);
                break;
            case 4:
                utn_showMaths(numeroUno, numeroDos, suma, resta, division, multiplicacion, factorialA, factorialB);
                break;
            default:
                //reingrese
                break;

        }
        llamarMenu(numeroUno, numeroDos);
        utn_getOption(&opcion,5,1,"Ingrese Opcion: ","Numero invalido! Reingrese opcion: ", 10);
    }
    printf("Gracias por utilizar la calculadora!!\n");
    return 0;
}


int llamarMenu(float numeroUno, float numeroDos)
{
    system("cls");
    printf("1. Ingresar 1er operando (A=%.2f)\n"
            "2. Ingresar 2do operando (B=%.2f)\n"
            "3. Calcular todas las operaciones\n"
            "4. Informar resultados\n"
            "5. Salir\n",numeroUno,numeroDos);
    return 0;
}


