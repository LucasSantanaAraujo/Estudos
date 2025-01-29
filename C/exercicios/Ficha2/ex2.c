/*

Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores
são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos
e positivos.

*/

#include <stdio.h>

#define ASIZE 5

int main(int argc, char const *argv[])
{
    int v[ASIZE];
    int valores_positivos = 0;
    int valores_negativos = 0;

    for (int i = 0; i < ASIZE; i++)
    {
        printf("\nDigite o %dº numero: ", i + 1);
        scanf("%d", &v[i]);

        if(v[i] < 0){
            valores_negativos++;
        } else {
            valores_positivos++;
        }
    }

    printf("\nQuantidade de numeros positivos: %d\n", valores_positivos);
    printf("\nQuantidade de numeros negativos: %d\n", valores_negativos);

    printf("\n");
    
    return 0;
}
