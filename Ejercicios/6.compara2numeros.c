#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("Dame dos numeros y te dare el menor de ellos\n");

int numero1;
int numero2;

printf("Ingresa el primer numero \n");
scanf("%i", &numero1);

printf("Ingresa el segundo numero \n");
scanf("%i", &numero2);

if (numero1 < numero2)
{
    printf("El numero menor es: %i \n", numero1);
}
else
{
    printf("El numero menor es: %i \n", numero2);
}

printf("INGRESA UN NUMERO PARA FINALIZAR");
scanf(" %i", &numero1);
return 0;
}
