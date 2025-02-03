/*

Defina a função numero_de_digitos() que retorna o número de dígitos de um valor inteiro 
que é passado como argumento.
Escreva um programa que, utilizando esta função, pede ao utilizador uma sequência de 
inteiros, mostrando para cada um o seu número de dígitos. A sequência termina assim que 
o utilizador insirir um número com mais de 7 dígitos.


*/

#include <stdio.h>
#include <stdlib.h>

int numero_digitos(int n) {

    if (n == 0) return 1;
    
    int contador = 0;

    while(n > 0) {

        n/= 10;
        contador++;
    }
    return contador;
}

int main(int argc, char const *argv[])
{
    int num;

    do
    {
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &num);

        int digitos = numero_digitos(num);

        printf("\nO numero %d tem %d digitos\n", num, digitos);

        if (digitos > 7) {
            printf("Número com mais de 7 dígitos inserido. Encerrando programa...\n");
            break; 
        }

    } while (numero_digitos(num) <= 7);

    printf("\n");
    
    return 0;
}
