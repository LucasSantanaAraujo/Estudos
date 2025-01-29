/*

Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
Dólares.

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float reais, dolares;

    printf("\nDigite o valor em reais: R$ ");
    scanf("%f", &reais);

    dolares = reais / 5.30;

    printf("\nR$ %.2f é igual a U$ %.2f\n", reais, dolares);

    return 0;
}
