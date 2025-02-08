#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n------------------------------------------------------------------------------------------------------------------------\n");
    printf("\nAula 4\n\n");
    printf("\n------------------------------------------------------------------------------------------------------------------------\n");

    printf("Criando Variaveis\n\n");





    int valor; // Criei uma variavel para guardar um valor do tipo inteiro.
    int valor2;
    printf("\n\nint valor; -> Criei uma Variavel para guardar um valor do tipo inteiro.\n\n\n");


    valor = 50; // Atribuição -> atribuir um valor a uma variavel
    valor2 = 80;

    printf("valor = 50; -> Atribuicao: atribuir um valor a uma variavel\n\n");
    printf("valor2 = 80; \n\n");

    //printf("\n\nValor da minha variavel: %d\n\n", valor); //  Caractere especial %d é uma mascara que indica que o valor a ser impresso é um numero inteiro.

    printf("\n\nDigite um valor inteiro: "); // Mensagem para interação com o usuario.

    scanf("%d",&valor); // Le oque o usuario digitou



    printf("\n\nDigite um segundo valor inteiro: "); // Mensagem para interação com o usuario.

    scanf("%d",&valor2); // Le oque o usuario digitou para variavel valor2

    printf("\n\nPrimeiro Valor: %d\n\n", valor); //exibe o valor atribuido pelo usuário.

    printf("\n\nSegundo Valor: %d\n\n", valor2); //exibe o valor atribuido pelo usuário.

    printf("\n\nPrecione qualquer tecla para finalizar.\n\n");

    getchar();

    return 0;
}
