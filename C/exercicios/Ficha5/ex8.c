/*

Defina a função maximo() que recebe um vector de inteiros e retorna o valor máximo dos seus elementos.

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5 

int maximo(int v[], int n) {
    
    int maior = v[0];

    for (int i = 0; i < n; i++)
    {
        if(v[i] > maior){
            maior = v[i];
        }
    }

    return maior;
}

int main(int argc, char const *argv[])
{
    int array[5];
    int max;

    for (int i = 0; i < SIZE; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &array[i]);
    }

    max = maximo(array, SIZE);

    printf("\nO maior número do array é: %d\n", max);

    printf("\n");
    
    return 0;
}
