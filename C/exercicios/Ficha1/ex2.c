/*

Faça um programa em C para trocar o valor de duas variaveis sem utilizar nenhuma variavel auxiliar.

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;

    printf("\nDigite o valor de a:\t");
    scanf("%d", &a);

    printf("\nDigite o valor de b:\t");
    scanf("%d", &b);

    printf("\nValores iniciais: \na = %d \nb = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nValores trocados: \na = %d \nb = %d\n", a, b);

    return 0;
}
