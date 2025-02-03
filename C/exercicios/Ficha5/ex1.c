/*

Escreva em linguagem C a função dobro() que, recebendo um inteiro como argumento, retorna o dobro desse valor.
Desenvolva um programa para testar esta função, que pede um inteiro ao utilizador e apresenta o seu
dobro e o seu quádruplo, utilizando exclusivamente a função dobro().

*/

#include <stdio.h>
#include <stdlib.h>


int dobro(int n) {
		
	return n * 2;
}

int main(int argc, char const *argv[])
{
    int num, dobro_num, quad_num;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num);

    // calcular o dobro do numero
    dobro_num = dobro(num);
    printf("\nO dobro de %d é %d\n", num, dobro_num);

    // calcular o quadruplo do numero
    quad_num = dobro(dobro(num));
    printf("\nO quádruplo de %d é %d\n", num, quad_num);

    printf("\n");
    
    return 0;
}
