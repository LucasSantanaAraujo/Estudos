/*

Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo que são descontados 8% para imposto de renda.

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float dias, valor_final, desconto;

    printf("Quantos dias o encanador trabalhou? ");
    scanf("%f", &dias);

    valor_final = dias * 45;
    desconto = valor_final * 0.08;
    valor_final = valor_final - desconto;

    printf("\nA receber: R$ %.2f\nDesconto: %.2f%%\n", valor_final, desconto);


    return 0;
}
