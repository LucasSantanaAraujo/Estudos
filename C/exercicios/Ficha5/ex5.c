/*

Defina a função trocar() que realiza a troca dos valores de duas variáveis. Por exemplo:
		ANTES : var1 = 10, var2 = 20
		DEPOIS: var1 = 20, var2 = 10

*/

#include <stdio.h>
#include <stdlib.h>

int trocar(int *a, int *b) {
		int tmp = *a;
		*a = *b;
		*b = tmp;

        return 0;
}

int main(int argc, char const *argv[])
{
    int n1, n2, troca;

    printf("\nDigite a primeira variavel: ");
    scanf("%d", &n1);

    printf("Digite a segunda variavel: ");
    scanf("%d", &n2);

    printf("\nANTES: var1 = %d, var2 = %d\n", n1, n2);

    troca = trocar(&n1, &n2);

    printf("\nDEPOIS: var1 = %d, var2 = %d\n", n1, n2);

    

    return 0;
}
