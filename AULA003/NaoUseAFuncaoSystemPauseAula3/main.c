#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n------------------------------------------------------------------------------------------------------------------------\n");
    printf("\nAula 3\n\n");
    printf("\n------------------------------------------------------------------------------------------------------------------------\n");

    printf(
           "\nA funcao sytem(pause) funciona legal apenas no windows e por isso ela deve ser evitada para nao ter proplecas com o seu codigo. Veja abaixo um solucao alternativa para que funcionar em qualquer ambiente essa pausa do prompt para o usuario");

    printf("\nPrecione qualquer tecla para finalizar.\n\n");

    getchar();

    return 0;
}
