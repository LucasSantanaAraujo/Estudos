/*

Defina a função soma() que recebe um vector de inteiros e retorna o somatório dos seus elementos

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int soma(int vetor[], int tamanho) {

		int soma = 0;

		for(int i = 0; i < tamanho; i++) {

			soma += vetor[i];
		}

		return soma;
}


int main(int argc, char const *argv[])
{
    int v[SIZE];
    int somatorio;

    for (int i = 0; i < SIZE; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    somatorio = soma(v, SIZE);

    printf("\nO somatório dos numeros do vetor é de: %d\n", somatorio);

    printf("\n");
    
    return 0;
}
