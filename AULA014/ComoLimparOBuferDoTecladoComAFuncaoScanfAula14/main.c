#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a, b;

    printf("Digite uma letra: ");
    scanf("%c", &a);
    printf("Digite outra letra: ");
    scanf(" %c", &b);

    printf("\n\nA letras digitadas foram: %c e %c", a,b);

    return 0;
}
