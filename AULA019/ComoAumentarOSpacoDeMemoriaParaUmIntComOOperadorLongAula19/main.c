#include <stdio.h>
#include <stdlib.h>

/*
    Aula 19

    Operador long para o tipo int
    %li / $ld
*/



int main()
{
    printf("Aula 19");
    printf("\n--------------------------------------------------------------------------------------------\n");

    long long int x = 300000000000000000000;

    printf("Tamanho de x em bytes: %lld \n",x);

    x++;

    printf("Tamanho de x em bytes: %lli \n",x);

    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("--------------------------------------------------------------------------------------------");

    return 0;
}
