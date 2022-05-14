#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ()
{
   
//conversion de  Fahrenheit a celsius
   float  fahrenheit;
   float celsius;

printf("Hola vamos a transformar grados  Fahrenheit a grados Celsius \n");
printf("Ingresa la temperatura en grados  Fahrenheit \n");
scanf("%f",&fahrenheit);

celsius=(fahrenheit-32) / 1.8;

printf("\n La temperatura en grados celcius es: %f \n", celsius);

    return 0;
}
