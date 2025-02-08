#include <stdio.h>
#include <stdlib.h>

/*
    Aula 16

    Operador sizeof

    sizeof x ou sizeof(int)

*/



int main()
{
    printf("Aula 16");
    printf("\n--------------------------------------------------------------------------------------------\n");


    char nome = 'C';

    printf("O tipo primitivo float ocupa o espaço de %d bytes em nosso computador\n\n", sizeof(float));

    printf("A variavel nome ocupa o espaço de %d bytes no armazenamento do computador", sizeof(nome)); //Podemos usar os () ou não pois trata-se de um operador e não uma função.


    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("--------------------------------------------------------------------------------------------");

    return 0;
}
