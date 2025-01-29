/*

Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em porcentagem) e o número de pessoas para dividir a conta. 
Imprima o valor que cada um deve pagar.
Assuma que a conta será dividida igualmente.

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float despesa;
    float valor_total;
    float gorjeta;
    int num_pessoas;
    float valor_pessoa;

    printf("\nDigite o valor da conta a ser dividida:\t");
    scanf("%f", &despesa);
    
    do
    {
        printf("\nDigite o valor da gorjeta: ");
        scanf("%f", &gorjeta);
    } while (gorjeta < 0);
    gorjeta = despesa * (gorjeta / 100);

    valor_total = despesa + gorjeta;
    
    printf("\nDigite o número de pessoas para dividir a conta: ");
    scanf("%d", &num_pessoas);

    valor_pessoa = valor_total / num_pessoas;

    printf("\nValor total da conta: R$ %.2f (com %.1f%% de gorjeta)", valor_total, gorjeta);
    printf("\nValor a pagar por pessoa: R$ %.2f\n", valor_pessoa);

    return 0;
}
