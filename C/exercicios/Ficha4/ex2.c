/*

Faça um programa que some o conteúdo de dois vetores de tamanho 15 e armazene o resultado
em um terceiro vetor. Imprima os três vetores na tela.

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int v1[15],v2[15], v3[15];

    for (int i = 0; i < 15; i++)
    {
        printf("Digite o %dº numero do vetor 1: ", i + 1);
        scanf("%d", &v1[i]);
    }

    printf("\n");

    for (int i = 0; i < 15; i++)
    {
        printf("Digite o %dº numero do vetor 2: ", i + 1);
        scanf("%d", &v2[i]);
    }

    for (int i = 0; i < 15; i++)
    {
        v3[i] = v1[i] + v2[i];
    }

    printf("\nVetor 1: { ");
    for (int i = 0; i < 15; i++)
    {
        printf("%d ", v1[i]);
    }
    printf("}\n");

    printf("\nVetor 2: { ");
    for (int i = 0; i < 15; i++)
    {
        printf("%d ", v2[i]);
    }
    printf("}\n");

    printf("\nVetor 3: { ");
    for (int i = 0; i < 15; i++)
    {
        printf("%d ", v3[i]);
    }
    printf("}\n");
    
    return 0;
}
