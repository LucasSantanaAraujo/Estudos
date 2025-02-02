/*

Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N,
inclusive N, se for o caso.

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i+=2)
    {
        printf("%d^2 = %d\n", i, i * i);
    }
    
    return 0;
}
