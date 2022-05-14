#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ()
{
    float radio;
    float altura;
    float area;
    float volumen;
    float pi=3.1415;

    printf("Vamos a calcular el volumen de un cilindro! \n\n");
    printf("Ingresar el radio del cilindro \n");
    scanf("%f", &radio);
    printf("Ingresar la altura del cilindro \n");
    scanf("%f", &altura);
    
    area= 2*pi*radio *(radio + altura);
    volumen= pi*(radio *radio)*altura;

    printf("El area del cilindro es: %f \n", area);
    printf("El volumen del cilindro es: %f \n \n", volumen);

    return 0;
}
