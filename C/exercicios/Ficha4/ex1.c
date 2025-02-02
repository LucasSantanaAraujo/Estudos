/*

Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
fim, imprima os dois vetores.

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int v1[10];
    int v2[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Introduza o %dº valor: ", i + 1);
        scanf("%d", &v1[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        v2[i] = v1[i] * v1[i];
    }
    

    printf("\nVetor 1: { ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", v1[i]);
    }
    printf("}\n");

    printf("\nVetor 2: { ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", v2[i]);
    }
    printf("}\n");

    printf("\n");
    
    return 0;
}
