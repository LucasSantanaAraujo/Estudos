/*

Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por
5, ou se não é divisível por nenhum deles.

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero;

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0 && numero % 3 == 0 && numero % 5 == 0){
        printf("\nO numero %d é divisivel por 2, 3 e 5.\n", numero);
    } else if(numero % 2 == 0 && numero % 3 == 0){
        printf("\nO numero %d é divisivel por 2 e 3.\n", numero);
    } else if(numero % 2 == 0 && numero % 5 == 0){
        printf("\nO numero %d é divisivel por 2 e 5.\n", numero);
    } else if(numero % 3 == 0 && numero % 5 == 0){
        printf("\nO numero %d é divisivel por 3 e 5.\n", numero);
    } else if(numero % 2 == 0){
        printf("\nO numero %d é divisivel por 2.\n", numero);
    } else if(numero % 3 == 0){
        printf("\nO numero %d é divisivel por 3.\n", numero);
    } else if(numero % 5 == 0){
        printf("\nO numero %d é divisivel por 5.\n", numero);
    } else {
        printf("\nO numero %d não é divisivel por 2, 3 ou 5.\n", numero);
    }
    return 0;
}
