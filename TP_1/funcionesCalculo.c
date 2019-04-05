#include <stdio.h>
#include <stdlib.h>

int utn_getOption(int* numeroIngresado, int max, int min, char* msgPregunta, char* msgError, int intentosMax)
{
    int auxNumeroIngresado;
    int execution = -1;
    printf("%s", msgPregunta);
    while(intentosMax>0){
        if(scanf("%d", &auxNumeroIngresado) != 0){
            if(auxNumeroIngresado >= min && auxNumeroIngresado <= max){
                *numeroIngresado = auxNumeroIngresado;
                execution = 0;
                break;
            }
        }
        printf("%s", msgError);
        intentosMax--;
    }
    if(intentosMax == 0){
        system("cls");
        printf("Te quedaste sin intentos. \n");
        *numeroIngresado = 5;
    }
    return execution;
}


int utn_getNumber(float* numeroIngresado, char* msgPregunta, char* msgError, int intentosMax)
{
    float auxNumeroIngresado;
    int execution = -1;
    printf("%s", msgPregunta);
    while(intentosMax>0){
        if(scanf("%f", &auxNumeroIngresado) != 0){
            *numeroIngresado = auxNumeroIngresado;
            break;
        }
        printf("%s", msgError);
        intentosMax--;
    }
    return execution;
}
//Funcion que calcular el Factorial de un numero. 
//Recibe como parametro el numero, y el puntero a la direccion de memoria donde se guardara el resultado.
int utn_getFactorial(float numeroN, long* factorialN)
{
    int b;
    int factorial = 1;
    if(numeroN>0){
        if(numeroN == 0){
            *factorialN = 1;
        }else{
            for (b = numeroN; b > 1; b--){
                factorial = factorial * b;
            }
            *factorialN = factorial;
        }
    }else{
        *factorialN = 0;
    }
    return 0;
}

int utn_doMaths(float numeroUno, float numeroDos, float* suma, float* resta, float* division, float* multiplicacion, long* factorialA, long* factorialB)
{


    *suma = numeroUno + numeroDos;
    *resta = numeroUno - numeroDos;
    if(numeroDos != 0){
        *division = numeroUno / numeroDos;
    }
    *multiplicacion = numeroUno * numeroDos;
    if(numeroUno > 0){
        utn_getFactorial(numeroUno, factorialA);
    }
    if(numeroDos > 0){
        utn_getFactorial(numeroDos, factorialB);
    }
    return 0;
}
int utn_showMaths(float numeroUno, float numeroDos, float suma, float resta, float division, float multiplicacion, long factorialA, long factorialB)
{
    printf("A) El resultado de A+B es: %.2f\n", suma);
    printf("B) El resultado de A-B es: %.2f\n", resta);
    if(numeroDos !=0){
       printf("C) El resultado de A/B es: %.2f\n",division);
    }else{
       printf("C) No es posible dividir por cero.\n");
    }
    printf("D) El resultado de A*B es: %.2f\n", multiplicacion);
    if(numeroUno > 0){
        printf("E) El factorial de A es: %ld. ", factorialA);
    }else{
        printf("E) No se puede calcular el factorial de A. ");
    }

    if(numeroDos > 0){
       printf("El factorial de B es: %ld\n", factorialB);
    }else{
        printf(" No se puede calcular el factorial de B. \n");
    }


    //printf("E) El factorial de A es: %ld y El factorial de B es: %ld\n", factorialA, factorialB);
    system("pause");
    return 0;
}

