/*

Defina a função ordem_crescente() que coloca por ordem crescente os valores de duas variáveis. Por
exemplo:
	ANTES : var1 = 15, var2 = 9
	DEPOIS: var1 = 9, var2 = 15

*/

#include <stdio.h>
#include <stdlib.h>

int ordem_crescente(int *a, int *b) {
    if (*a > *b) {
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int n1, n2, ordem;

    printf("\nDigite a primeira variavel: ");
    scanf("%d", &n1);

    printf("Digite a segunda variavel: ");
    scanf("%d", &n2);

    printf("\nANTES: var1 = %d, var2 = %d\n", n1, n2);

    ordem = ordem_crescente(&n1, &n2);

    printf("DEPOIS: var1 = %d, var2 = %d\n", n1, n2);

    printf("\n");

    return 0;
}
