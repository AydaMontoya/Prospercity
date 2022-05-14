#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
   printf("Ingresa un numero entero \n");

    int x;
printf("ingrese el numero: \n");
scanf("%i", &x);

    x %= 5;
    x++;

printf("X: %i \n", x);
    
printf("INGRESA UN NUMERO PARA FINALIZAR");
scanf(" %i", &x);

    return 0;
}
