/*

Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
a) some cada uma das linhas armazenando o resultado em um vetor;
b) some cada uma das colunas armazenando o resultado em um vetor;
c) Imprima os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matriz[5][10] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
        {41, 42, 43, 44, 45, 46, 47, 48, 49, 50}
    };

    // a) Somar cada uma das linhas armazenando o resultado em um vetor

    int somar_linhas[5] = {0};


    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            somar_linhas[i] += matriz[i][j];
        }
        
    }

    printf("\n");

    printf("Soma de cada linha: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nLinha %d: %d\n", i + 1, somar_linhas[i]);
    }
    
    printf("\n");


    // b) Somar cada uma das colunas armazenando o resultado em um vetor

    int somar_colunas[10] = {0};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            somar_colunas[j] += matriz[i][j];
        }
        
    }

    printf("\n");

    printf("Soma de cada coluna: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("\nColuna %d: %d\n", i + 1, somar_colunas[i]);
    }
    printf("\n");


    // c) Imprimir os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas

    printf("\nVetor da soma das linhas: \n");
    printf("{ ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", somar_linhas[i]);
        if (i < 4) printf(", ");
    }
    printf("}\n");

    printf("\nVetor da soma das colunas: \n");
    printf("{ ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", somar_colunas[i]);
        if (i < 9) printf(", ");
    }
    printf("}\n");
    
    printf("\n");
    
    return 0;
}
