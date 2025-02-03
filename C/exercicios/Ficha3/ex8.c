/*

Escreva um programa em linguagem C que cumpra os seguintes requisitos.
(a) Deve guardar num vector 10 valores inteiros inseridos pelo utilizador.
(b) Deve ordenar o vector por ordem crescente, apresentando o resultado dessa ordenação.
(c) Deve perguntar ao utilizador por um número a pesquisar. Utilizando a pesquisa binária, deve
informar em que posição do vector esse número se encontra, ou informar que o número não existe
no vector.
(d) Deve apresentar o vector ordenado por ordem decrescente.

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int size = 10;
    int v[size];

    // a)

    // pedir os 10 numeros
    for (int i = 0; i < size; i++)
    {
        printf("Introduza o %dº numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    // imprimir os 10 numeros
    printf("\nVetor original\n");
    printf("{ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", v[i]);

        if (i < size - 1) printf(", ");
        
    }
    printf("}\n");

    
    // b)

    // ordenar por ordem crescente
    int tmp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size ; j++)
        {
            if(v[i] > v[j]){
                tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
            }
        }        
    }

    // imprimir o vetor em odem crescente
    printf("\nVetor em ordem crescente\n");
    printf("{ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", v[i]);

        if (i < size - 1) printf(", ");
    }
    printf("}\n");
    

    // c)
    int p, m;
    int l = 0, r = size - 1;
    int find = 0;

    printf("\nNumero a pesquisar no vetor: ");
    scanf("%d", &p);

    while (l <= r)
    {
        m = (l + r) / 2;

        if(v[m] == p){

            find = 1;
            printf("\nO numero %d foi encontrado na posição %d\n", p, m);
            break;

        } else if (v[m] < p){

            l = m + 1;

        } else {

            r = m - 1;

        }
    }
    

    if(!find) {
        printf("\nO numero %d não existe no vetor\n", p);
    }
    

    // d)

    // imprimir o vetor em ordem decrescente
    int temp;

    printf("\nVetor em ordem decrescente\n");
    printf("{ ");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", v[i]);

        if (i > 0) printf(", ");
    }
    printf("}\n");

    printf("\n");
    
    return 0;
}
