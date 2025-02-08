#include <stdio.h>
#include <stdlib.h>

/*
    Aula 22

   Operador long para o tipo double
   double -> %lf
   long double -> %Lf

*/



int main()
{
    printf("Aula 22");
    printf("\n--------------------------------------------------------------------------------------------\n");

    float x = 3.1415;

    double y = 3.1415141514151415141514151415141514151415214151415141514151415;

    long double pi = 3.141592653589793238462643383279502884197169399375105820974944;


    printf("Tamanho de x em bytes: %d \n", sizeof x);

    printf("Valor de y: %.100lf \n", y);

    //x++;

    printf("Tamanho de y em bytes: %d \n", sizeof y);

    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("--------------------------------------------------------------------------------------------");

    return 0;
}
