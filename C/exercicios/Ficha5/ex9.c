/*

Defina a função media() que recebe um vector de inteiros e 
retorna o valor da média (real) dos seus elementos.


*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

float media(int vetor[], int tamanho) {

		float soma = 0;		
		float media_elementos;

		for(int i = 0; i < tamanho; i++) {

			soma += vetor[i];
		}

		media_elementos = soma / tamanho;

		return media_elementos;
	}

    int main(int argc, char const *argv[])
    {
        int v[SIZE];
        float media_numeros;

        for (int i = 0; i < SIZE; i++)
        {
            printf("Digite o %dº numero: ", i + 1);
            scanf("%d", &v[i]);
        }
        
        media_numeros = media(v, SIZE);

        printf("\nA média dos numeros do vetor é de: %.2f\n", media_numeros);

        printf("\n");

        return 0;
    }
    