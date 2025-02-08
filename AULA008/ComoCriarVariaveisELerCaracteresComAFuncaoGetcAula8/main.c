#include <stdio.h>
#include <stdlib.h>

int main(){
    char letra;

    printf("Digite um Caracter: ");
    letra = getc(stdin);
    printf("\n\nA letra digitado foi: %c\n\n", letra);
    return 0;
}

