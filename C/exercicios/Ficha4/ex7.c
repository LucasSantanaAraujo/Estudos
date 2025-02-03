/*

Faça um programa que calcule e imprima a soma de todos os elementos de uma matriz 5 x 7.

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int soma = 0;
    int matriz[5][7] = {
        {1, 2, 3, 4, 5, 6, 7},
        {8, 9, 10, 11, 12, 13, 14},
        {15, 16, 17, 18, 19, 20, 21},
        {22, 23, 24, 25, 26, 27, 28},
        {29, 30, 31, 32, 33, 34, 35}
    };

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            soma += matriz[i][j];
            printf("%2d ", matriz[i][j]);
        }

        printf("\n");       
    }

    printf("\nSoma de todos os elementos da matriz : %d\n", soma);

    printf("\n");
    
    return 0;
}
