#ifndef FUNCIONESCALCULO_H_INCLUDED
#define FUNCIONESCALCULO_H_INCLUDED

int utn_getOption(int* numeroIngresado, int max, int min, char* msgPregunta, char* msgError, int intentosMax);
int utn_getNumber(float* numeroIngresado, char* msgPregunta, char* msgError, int intentosMax);
int utn_getFactorial(float numeroN, long* factorialN);
int utn_doMaths(float numeroUno, float numeroDos, float* suma, float* resta, float* division, float* multiplicacion, long* factorialA, long* factorialB);
int utn_showMaths(float numeroUno, float numeroDos, float suma, float resta, float division, float multiplicacion, long factorialA, long factorialB);
#endif // FUNCIONESCALCULO_H_INCLUDED
