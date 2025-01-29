/*

Elabore um algoritmo que receba através do teclado, dois valores, um para avariavel "a" e outro para a  ariavel "b".
Em seguida faça com que a variavel a possua o valor que inicialmente estava em b, e a variavel b possua o valor que inicialmente estava em, a.
Exiba os valores na tela.

*/

# include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, temp;

    printf("\nDigite o valor de a: ");
    scanf("%d", &a);

    printf("\nDigite o valor de b: ");
    scanf("%d", &b);

    printf("\nValores iniciais: \na = %d \nb = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("\nValores finais:\na = %d \nb = %d\n", a, b);
    return 0;
}
