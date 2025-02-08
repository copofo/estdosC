#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    int idade;
    float peso, altura;



    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu sexo (f, F, m ou M): ");
    scanf(" %c", &sexo);


    printf("\n\nResultado -> \n\nSexo: %c \n\nIdade: %d \n\nPeso: %.1f \n\naltura: %.2f\n\n", sexo, idade, peso, altura);
    return 0;


    return 0;
}
