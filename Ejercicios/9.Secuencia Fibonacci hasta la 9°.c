#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("Secuencia Fibonacci hasta la 9° vuelta \n");
    
    int numero;
    int i;
    int primero = 0;
    int segunda = 1;
    int tercero = 0;

    printf("Digite el numero de elementos: \n");
    scanf("%i",&numero);

    printf("1,");

    for(i = 1; i <= numero; i++)
    {
        tercero = primero + segunda;
        primero = segunda;
        segunda = tercero;

        printf("%i, ",tercero);
    }

printf("\nINGRESA UN NUMERO PARA FINALIZAR");
    scanf(" %i", &numero);

    return 0;
}
