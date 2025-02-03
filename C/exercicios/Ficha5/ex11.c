/*

Defina a função ordenar() que recebe um vector de inteiros e 
ordena os seus elementos por ordem crescente

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void ordenar(int vetor[], int tamanho) {
	
	int tmp;

	for(int i = 0; i < tamanho - 1; i++) {

        for(int j = i + 1; j < tamanho; j++) {

            if(vetor[i] > vetor[j]) {

				int tmp = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = tmp;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
    int v[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nVetor original: { ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", v[i]);

        if(i < SIZE - 1) {
            printf(", ");
        }
    }
    printf(" }\n");

    ordenar(v, SIZE);

    printf("\nVetor em ordem crescente é: { ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", v[i]);

        if(i < SIZE - 1) {
            printf(", ");
        }
    }
    printf("}\n");

    printf("\n");
    
    return 0;
}
