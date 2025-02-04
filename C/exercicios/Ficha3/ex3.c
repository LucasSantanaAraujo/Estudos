/*

Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
Restrição:
→ O bloco de repetição deve executar no máximo 500 vezes.

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int soma = 0;

    for (int i = 1; i <= 1000; i+=2)
    {
            soma += i;
    }
    
    printf("A soma dos numeros impares entre 1 e 1000 é: %d\n", soma);

    return 0;
}
