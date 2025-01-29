/*

Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
conversão para horas, minutos e segundos.
Exemplo:
Entrada: 3672
Saída: 1:1:12

*/

# include <stdio.h>

int main(int argc, char const *argv[])
{
    int segundos, horas, minutos, resto;

    printf("\nDigite um valor em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("\n%d:%d:%d\n", horas, minutos, segundos);
    printf("\n");

    return 0;
}
