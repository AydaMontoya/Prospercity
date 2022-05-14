#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("Se generan los números de 1 al 100 \n");
    
    int numero = 1;

    do
    {
    printf("%i\n", numero);
    numero++;
    }
    while(numero <= 100);

printf("INGRESA UN NUMERO PARA FINALIZAR");
    scanf("%i", &numero);

    return 0;
}
