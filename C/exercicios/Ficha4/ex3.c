/*

Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
o 1º elemento com o último, o 2ª com o penúltimo, ... até o 10ª com o 11º. Imprima o vetor N
modificado.

*/

#include <stdio.h>

#define TAMANHO 20

int main(int argc, char const *argv[])
{
    int n[TAMANHO];
    int tmp;

    printf("Digite 20 valores para o vetor:\n");
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &n[i]);
    }
    
    printf("\nVetor N: { ");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%d ", n[i]);
    }
    printf("}\n");

    for (int i = 0; i < TAMANHO / 2; i++)
    {
        tmp = n[i];
        n[i] = n[TAMANHO - i - 1];
        n[TAMANHO - i - 1] = tmp;
    }
    
    printf("\nVetor N modificado: { ");
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("%d ", n[i]);
    }
    printf("}\n");

    printf("\n");

    return 0;
}
