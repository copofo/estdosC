#include <stdio.h>
#include <stdlib.h>

int main()
{

    char a, b;

    printf("Digite 2 letras: ");
    scanf("%c %c", &a, &b); // espa�o entre %c -> comando para o computador desconsiderar o ENTER, TAB e ESPA�O.


    printf("\n\nAs letras digitadas foram: %c e %c", a, b);

    return 0;
}
