/*

Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um
vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
mês por extenso: janeiro, fevereiro ...). Desconsidere empates.

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float temp[12];
    float maior = 0, menor = 999;
    int indice_maior, indice_menor;

    for (int i = 0; i < 12; i++)
    {
        printf("Digite a temperatura média do mês %d: ", i + 1);
        scanf("%f", &temp[i]);

        if (maior < temp[i])
        {
            maior = temp[i];
            indice_maior = i;
        }

        if (menor > temp[i])
        {
            menor = temp[i];
            indice_menor = i;
        }
    }


    printf("\nA menor temperatura foi de %.1fºC e foi no Mês de ", menor);
    switch (indice_menor)
    {
    case 0:
        printf("Janeiro\n");
        break;
    case 1:
        printf("Fevereiro\n");
        break;
    case 2:
        printf("Março\n");
        break;
    case 3:
        printf("Abril\n");
        break;
    case 4:
        printf("Maio\n");
        break;
    case 5:
        printf("Junho\n");
        break;
    case 6:
        printf("Julho\n");
        break;
    case 7:
        printf("Agosto\n");
        break;
    case 8:
        printf("Setembro\n");
        break;
    case 9:
        printf("Outubro\n");
        break;
    case 10:
        printf("Novembro\n");
        break;
    case 11:
        printf("Dezembro\n");
        break;
    
    default:
        break;
    }

    printf("\nA maior temperatura foi de %.1fºC e foi no Mês de ", maior);
    switch (indice_maior)
    {
    case 0:
        printf("Janeiro\n");
        break;
    case 1:
        printf("Fevereiro\n");
        break;
    case 2:
        printf("Março\n");
        break;
    case 3:
        printf("Abril\n");
        break;
    case 4:
        printf("Maio\n");
        break;
    case 5:
        printf("Junho\n");
        break;
    case 6:
        printf("Julho\n");
        break;
    case 7:
        printf("Agosto\n");
        break;
    case 8:
        printf("Setembro\n");
        break;
    case 9:
        printf("Outubro\n");
        break;
    case 10:
        printf("Novembro\n");
        break;
    case 11:
        printf("Dezembro\n");
        break;
    
    default:
        break;
    }


    printf("\n\n");
    
    return 0;
}
