#include <stdio.h>
#include <stdlib.h>
//Funcion que muestra el Menu. Recibe como parametros el valor de NumeroA y NumeroB (x e y)
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
