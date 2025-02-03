/*

O sistema de controlo de produção de uma cervejeira guarda num conjunto de variáveis a regulação da
temperatura para cada cuba de fermentação. Frequentemente é necessário alterar o valor da temperatura 
de uma cuba. Defina a função aumentar_temperatura() recebe uma variável de regulação de uma cuba e os 
graus a aumentar à temperatura da cuba. Por exemplo:
	ANTES : temperatura_cuba = 37, incremento = 5
	DEPOIS: temperatura_cuba = 42

*/

#include <stdio.h>
#include <stdlib.h>

double aumentar_temperatura(float *temperatura, float *incremento) {
    
    *temperatura += *incremento;

    return *temperatura;
}

int main(int argc, char const *argv[])
{
    float temp, inc, resultado;

    printf("\nDigite a temperatura da cuba em ºC: ");
    scanf("%f", &temp);

    printf("Digite o incremento da temperatura em ºC: ");
    scanf("%f", &inc);

    resultado = aumentar_temperatura(&temp, &inc);

    printf("\nA temperatura da cuba agora é de: %.1fºC\n", resultado);

    printf("\n");

    return 0;
}
