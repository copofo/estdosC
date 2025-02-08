#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;

    printf("Digite um caracter: ");

    letra = fgetc(stdin);

    printf("\nCaracter lido: %c\n\n", letra);
    return 0;
}
