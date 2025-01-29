/*

Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float real, dolar, taxa = 5.30;
    int escolha;

    

    do
    {
        printf("\n======== Menu de Conversão ========\n");
        printf("\n  1 -   Real para Dólar\n");
        printf("\n  2 -   Dólar para Real\n");
        printf("\n  0-    Sair\n");
        printf("\nDigite a opção desejada: ");
        scanf("%d", &escolha);
        
        switch (escolha)
        {
        case 1:
            printf("\nDigite o valor em reais: R$");
            scanf("%f", &real);

            dolar = real / taxa;

            printf("\n%.2f reais equivalem a %.2f dolares\n", real, dolar);
            break;

        case 2:
            printf("\nDigite o valor em dolares: U$");
            scanf("%f", &dolar);

            real = dolar * taxa;

            printf("\n%.2f dolares equivalem a R$ %.2f\n", dolar, real);
            break;

        case 0:
            printf("\nSaindo...\n");
            break;
    
        default:
            break;
        }
    } while (escolha != 0);
    

    printf("\n");

    return 0;
}
