/*

Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.

*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &a);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &b);
    printf("\nDigite o terceiro numero: ");
    scanf("%d", &c);


    if(a < b && a < c){
        printf("\nO menor numero é o %d\n", a);
    } else if(b < a && b < c){
        printf("\nO menor numero é o %d\n", b);
    } else {
        printf("\nO menor numero é o %d\n", c);
    }

    if(a > b && a > c){
        printf("\nO maior numero é o %d\n", a);
    } else if(b > a && b > c){
        printf("\nO maior numero é o %d\n", b);
    } else {
        printf("\nO maior numero é o %d\n", c);
    }

    printf("\n");

    return 0;
}
