#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("variable 10 sumada a si misma el doble de su valor");

    int x = 10;

    x += (2*x);
    printf("\n El resultado es: %i \n", x);
    
   
    return 0;
}
