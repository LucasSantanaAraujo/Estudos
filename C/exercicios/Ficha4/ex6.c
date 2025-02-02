/*

Faça um programa para ordenar um vetor com 10 números inteiros da forma mais eficiente. 
Imprima o vetor antes e após a ordenação.

*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10

int main(int argc, char const *argv[])
{
    int v[TAMANHO];
    int tmp;
    int trocado = 0;

    printf("Digite 10 valores para o vetor:\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%dº valor: ", i + 1);
        scanf("%d", &v[i]);
    }
    
    printf("\nVetor antes da ordenação: { ");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%d ", v[i]);
    }
    printf("}\n");


    for (int i = 0; i < TAMANHO - 1; i++)
    {
        trocado = 0;
        for (int j = 0; j < TAMANHO - 1; j++)
        {
            if(v[j] > v[j + 1]){
                tmp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = tmp;

                trocado = 1;
            }
        } 
        
        if (trocado == 0){
            break;
        }       
    }

    printf("\nVetor após a ordenação: { ");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%d ", v[i]);
    }
    printf("}\n");

    printf("\n");
    
    return 0;
}
