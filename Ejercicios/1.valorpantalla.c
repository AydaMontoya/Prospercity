#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Se requiere recibir dos valores, mostrarlos en pantalla y luego intercambiarlos

int main()
{
    int integerX;
    int integerY;
    int aux;

    printf("Ingrese un valor entero: \n");
    scanf("%i", &integerX);
    printf("Ingrese un valor entero: \n");
    scanf("%i", &integerY);

    aux = integerX;
    integerX = integerY;
    integerY = aux;

    printf("Valores intercambiados");
    printf("\n %i", integerX);
    printf("\n %i", integerY);
    printf("\n");
    

    return 0;
}
