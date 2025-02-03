/*

Defina a função nota_final() que calcula a nota final, calculando a média pesada da nota de frequência
e da nota de exame. A função tem que receber as duas notas, e também os pesos das notas.
Escreva um programa que permita testar esta função.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double nota_final(double nota_freq, double nota_exame, int peso_freq, int peso_exame) {
    
    float peso_total = peso_freq + peso_exame;
    float media_final = ((nota_freq * peso_freq) + (nota_exame * peso_exame)) / peso_total;

    return media_final;
}

int main(int argc, char const *argv[])
{
    float nf, ne, media;
    int pf, pe, resultado;

    printf("\nDigite a nota de freqência: ");
    scanf("%f", &nf);
    printf("Digite o peso da frequência em %% [0 a 100]: ");
    scanf("%d", &pf);

    printf("\nDigite a nota do exame: ");
    scanf("%f", &ne);
    printf("Digite o peso do exame em %% [0 a 100]: ");
    scanf("%d", &pe);

    if((pf + pe) != 100) {
        printf("\nErro: A soma dos pesos das notas deve ser igual a 100%%\n");
        return 1;
    }

    // calculo da nota final
    media = nota_final(nf, ne, pf, pe);
    resultado = (int)ceil(media);

    printf("\nA média final é: %.2f\n", media);
    printf("\nA nota final é: %d\n", resultado);

    printf("\n");
    return 0;
}
