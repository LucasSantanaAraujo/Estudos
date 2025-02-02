/*

Elabore um programa em C para ler do teclado um valor inteiro entre 1 e 10 e apresentar a
tabuada. Exemplo:
Entrada 7
Saída:
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, resultado;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &n);

    } while (n < 1 || n > 10);

    for (int i = 1; i <= 10; i++)
    {
        resultado = n * i;
        printf("%d x %d = %d\n", n, i, resultado);
    }
    
    
    return 0;
}
