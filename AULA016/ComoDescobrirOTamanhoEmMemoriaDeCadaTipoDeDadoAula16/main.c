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

    printf("O tipo primitivo float ocupa o espa�o de %d bytes em nosso computador\n\n", sizeof(float));

    printf("A variavel nome ocupa o espa�o de %d bytes no armazenamento do computador", sizeof(nome)); //Podemos usar os () ou n�o pois trata-se de um operador e n�o uma fun��o.


    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("--------------------------------------------------------------------------------------------");

    return 0;
}
