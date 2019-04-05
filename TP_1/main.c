#include <stdio.h>
#include <stdlib.h>
#include "funcionesCalculo.h"
#include "funcionesTexto.h"
//Propotipo de funcion "Llamar Menu"

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
	//Funcion que muestra el Menu. Recibe como parametros el valor de NumeroA y NumeroB (x e y)
    llamarMenu(numeroUno, numeroDos);
	//Funcion que capta el numero de Opcion ingresado por el usuario, (min 1, max 5, intentos max 10.)
    utn_getOption(&opcion,5,1,"\nIngrese Opcion: ","Numero invalido! Reingrese opcion: ", 10);
    while(opcion != 5){
        switch(opcion){
            case 1:
				//Funcion que capta numero ingresado por el usuario, que se guardara para futuros calculos como "numeroUno"
                utn_getNumber(&numeroUno,"\nIngrese numero 1: ","Numero invalido! Reingrese numero 1: ", 10);
                break;
            case 2:
				//Funcion que capta numero ingresado por el usuario, que se guardara para futuros calculos como "numeroUno"
                utn_getNumber(&numeroDos,"\nIngrese numero 2: ","Numero invalido! Reingrese numero 2: ", 10);
                break;
            case 3:
				//Funcion que realiza las cuentas matematicas en base a numeroUno y numeroDos.
                utn_doMaths(numeroUno,numeroDos, &suma, &resta, &division, &multiplicacion, &factorialA, &factorialB);
                break;
            case 4:
				//Funcion que muestra los resultados de las cuentas, por pantalla.
                utn_showMaths(numeroUno, numeroDos, suma, resta, division, multiplicacion, factorialA, factorialB);
                break;
            default:
                break;
		}
		//Se muestra el menu otra vez
        llamarMenu(numeroUno, numeroDos);
		//Y se toma la opcion del usuario.
        utn_getOption(&opcion,5,1,"Ingrese Opcion: ","Numero invalido! Reingrese opcion: ", 10);
    }
    printf("Gracias por utilizar la calculadora!!\n");
    return 0;
}
