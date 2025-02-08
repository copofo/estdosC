#include <stdio.h>
#include <stdlib.h>

/*
    Aula 17

    Operador short para i tipo int
    intervalo: -32.768 até 32.767
    %hi ou %d
*/



int main()
{
    printf("Aula 17");

    printf("\n--------------------------------------------------------------------------------------------\n");

    short int x = 32767;

    printf("Valor de x: %d bytes \n\n", x );
    x++;

    printf("Valor de x: %hi bytes \n\n", x);
    printf("\n\n\n\n\n\n\n\n\n\n");

    printf("--------------------------------------------------------------------------------------------");

    return 0;
}
