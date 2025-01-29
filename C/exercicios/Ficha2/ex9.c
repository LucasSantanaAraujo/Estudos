/*

Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos
dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é
equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não
formam um triângulo”.

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b, c;

    do
    {
        printf("\nDigite o valor de a: ");
        scanf("%f", &a);

        printf("\nDigite o valor de b: ");
        scanf("%f", &b);

        printf("\nDigite o valor de c: ");
        scanf("%f", &c);

        if ( (a + b) > c && (a + c) > b && (b + c) > a ){
            printf("\nOs valores %.1f, %.1f e %.1f FORMAM um triangulo!!\n", a, b, c);

            if (a == b && a == c){

                printf("\nO triangulo é EQUILÁTERO!\n");

            } else if (a == b || a == c || b == c){

                printf("\nO triangulo é ISÓSCELES\n");

            } else {

                printf("\nO triangulo é ESCALENO\n");   

            }

        } else {

            printf("\nOs valores %.1f, %.1f e %.1f NÃO FORMAM um triangulo!!!!\n", a, b, c);

        }

    } while (a <= 0 || b <= 0 || c <= 0);

    printf("\n\n");
    
    return 0;
}
