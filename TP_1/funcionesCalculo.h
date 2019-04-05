#ifndef FUNCIONESCALCULO_H_INCLUDED
#define FUNCIONESCALCULO_H_INCLUDED
//Funcion que capta el numero de Opcion ingresado por el usuario, (min 1, max 5, intentos max 10.)
int utn_getOption(int* numeroIngresado, int max, int min, char* msgPregunta, char* msgError, int intentosMax);
//Funcion que capta numero ingresado por el usuario, que se guardara para futuros calculos como "numeroUno"
int utn_getNumber(float* numeroIngresado, char* msgPregunta, char* msgError, int intentosMax);
//Funcion que calcular el Factorial de un numero. Recibe como parametro el numero, y el puntero a la direccion de memoria donde se guardara el resultado.
int utn_getFactorial(float numeroN, long* factorialN);
//Funcion que realiza las cuentas matematicas en base a numeroUno y numeroDos.
int utn_doMaths(float numeroUno, float numeroDos, float* suma, float* resta, float* division, float* multiplicacion, long* factorialA, long* factorialB);
//Funcion que muestra los resultados de las cuentas, por pantalla.
int utn_showMaths(float numeroUno, float numeroDos, float suma, float resta, float division, float multiplicacion, long factorialA, long factorialB);
#endif // FUNCIONESCALCULO_H_INCLUDED
