/*

Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um
código inteiro e faça uma das ações abaixo:
0 – finaliza o programa;
1 – imprime o vetor na ordem do início ao fim;
2 – imprime o vetor na ordem inversa (do fim para o início).
O programa deve funcionar até que o usuário digite 0 para finalizar.

*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10

int main(int argc, char const *argv[])
{
    float v[TAMANHO];
    int opcao;

    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%f", &v[i]);
    }
    

    do
    {
        printf("\n========== Menu ==========\n");
        printf("0 - Finalizar o programa\n");
        printf("1 - Imprimir o vetor na ordem do início ao fim\n");
        printf("2 - Imprimir o vetor na ordem inversa\n");
        printf("==========================\n");
        printf("\nDigite uma opção [0, 1 ou 2]: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 0:
            printf("\nPrograma finalizado!\n");
            break;
        case 1:
            printf("\nVetor original: { ");
            for (int i = 0; i < TAMANHO; i++)
            {
                printf("%.2f ", v[i]);
            }
            printf("}\n");
            break;
        case 2:
            printf("\nVetor invertido: { ");
            for (int i = TAMANHO - 1; i >= 0; i--)
            {
                printf("%.2f ", v[i]);
            }
            printf("}\n");
            break;
        default:
            printf("\nOpção inválida!\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}
