/*

Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para
isso a estrutura de seleção switch.
Obs.: Considere fevereiro como tendo 28 dias.

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero_mes;

    do
    {
        printf("\nDigite um numero de um mês: ");
        scanf("%d", &numero_mes);

        if(numero_mes <= 0 || numero_mes > 12){
            printf("\nMês inválido\n");
        } else {
            switch (numero_mes)
            {
                case 1:
                    printf("\nO mês de Janeiro tem 31 dias\n");
                    break;
                case 2:
                    printf("\nO mês de Fevereiro tem 28 dias\n");
                    break;
                case 3:
                    printf("\nO mês de Março tem 31 dias\n");
                    break;
                case 4:
                    printf("\nO mês de Abril tem 30 dias\n");
                    break;
                case 5:
                    printf("\nO mês de Maio tem 31 dias\n");
                    break;
                case 6:
                    printf("\nO mês de Junho tem 30 dias\n");
                    break;
                case 7:
                    printf("\nO mês de Julho tem 31 dias\n");
                    break;
                case 8:
                    printf("\nO mês de Agosto tem 31 dias\n");
                    break;
                case 9:
                    printf("\nO mês de Setembro tem 30 dias\n");
                    break;
                case 10:
                    printf("\nO mês de Outubro tem 31 dias\n");
                    break;
                case 11:
                    printf("\nO mês de Novembro tem 30 dias\n");
                    break;
                case 12:
                    printf("\nO mês de Dezembro tem 31 dias\n");
                    break;
                default:
                    break;
            }
        }
    } while (numero_mes <= 0 || numero_mes > 12);
    
    printf("\n");
    
    return 0;
}
