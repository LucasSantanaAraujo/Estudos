/*

Escreva em linguagem C a função soma() que recebe dois inteiros como argumentos, e retorna a sua soma
Desenvolva um programa para testar esta função, que lê três inteiros e apresenta a sua soma, utilizando
exclusivamente a função soma().

*/

#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b) {

    return a + b;
}

int main(int argc, char const *argv[])
{
    int n1, n2, n3, soma_numeros;

    
    printf("\nDigite o primeiro numero inteiro: ");
    scanf("%d", &n1);

    printf("\nDigite o segundo numero inteiro: ");
    scanf("%d", &n2);

    printf("\nDigite o terceiro numero inteiro: ");
    scanf("%d", &n3);

    soma_numeros = soma(soma(n1, n2), n3);

    printf("\n%d + %d + %d = %d\n", n1, n2, n3, soma_numeros);

    printf("\n");
    
    return 0;
}
