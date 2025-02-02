/*

Escreva um programa em C que funcione como uma calculadora. O programa deve apresentar
um menu ao usuário da seguinte forma:
1 – Somar
2 – Subtrair
3 – Multiplicar
4 – Dividir
0 – Sair

Uma estrutura do tipo switch deve ser utilizada para realizar cada operação em um case. Após a
escolha da operação, dois valores devem ser pedidos ao usuário para realizar a operação escolhida.
Se a operação escolhida for a 4 o dividendo não pode ser zero, um novo valor deve ser solicitado. O
programa deve funcionar até que o usuário escolha a opção 0 (opção de saída).

*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int opcao;
    float n1, n2;

    do
    {
        printf("\n========== Calculadora Simples ==========\n");
        printf("\t1 - Somar\n");
        printf("\t2 - Subtrair\n");
        printf("\t3 - Multiplicar\n");
        printf("\t4 - Dividir\n");
        printf("\t0 - Sair\n");
        printf("=========================================\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao < 0 || opcao > 4) {
            printf("\nOpcao invalida!\n");
            continue; 
        }

        if (opcao != 0) {
            printf("\nDigite dois numeros\n");
            printf("\n1º numero: ");
            scanf("%f", &n1);
            printf("\n2º numero: ");
            scanf("%f", &n2);
        }

        switch (opcao)
        {
            case 1:
                printf("\n%.1f + %.1f = %.1f\n", n1, n2, n1+n2);
                break;

            case 2:
                printf("\n%.1f - %.1f = %.1f\n", n1, n2, n1-n2);
                break;
    
            case 3:
                printf("\n%.1f x %.1f = %.1f\n", n1, n2, n1*n2);
                break;

            case 4:
                while (n2 == 0) {
                    printf("\nDivisor nao pode ser zero!\n");
                    printf("\nDigite um novo numero para o 2º numero: ");
                    scanf("%f", &n2);
                }
        
                printf("\n%.1f / %.1f = %.1f\n", n1, n2, n1/n2);
                break;

            case 0:
                printf("\nSaindo...\n");
                break;
    
            default:
                break;
        }
        
    } while (opcao != 0);

    return 0;
}