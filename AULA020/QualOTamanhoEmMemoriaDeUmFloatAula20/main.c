#include <stdio.h>
#include <stdlib.h>

/*
    Aula 20

   Tsmanho de um float na memoria
    %f
*/



int main()
{
    printf("Aula 20");
    printf("\n--------------------------------------------------------------------------------------------\n");

    float x = 3.1415;

    printf("Tamanho de x em bytes: %d \n", sizeof x);

    x++;

    printf("Tamanho de x em bytes: %d \n", sizeof x);

    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("--------------------------------------------------------------------------------------------");

    return 0;
}
