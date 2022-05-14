#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("Escribe 1 si quieres ir por el camino de dulces \n");
    printf("Escribe 2 si quieres ir por el camino de madera \n");
    printf("Escribe 3 si quieres ir por el camino de gatitos \n");

    int option;

    scanf("%i", &option);

    switch(option)
{
    case 1:
        printf("Los dulces te dan 100 modenas sigue asi!!\n");
    break;

    case 2:
        printf("La madera te regala 5 edificios mas\n");
    break;

    case 3:
        printf("Los gatitos te hacen pasar al siguiente nivel\n");
    break;

    default:
        printf("Elegiste una opcion invalida\n");
    break;
}

printf("INGRESA UN NUMERO PARA FINALIZAR");
    scanf(" %i", &option);
    return 0;
}

