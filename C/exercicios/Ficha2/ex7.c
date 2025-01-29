/*

7) Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.

*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char letra;

    printf("\nDigite uma letra: ");
    scanf("%c", &letra);

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        
        printf("\n%c é uma vogal.\n", letra);
    } else {

        printf("\n%c não é uma vogal.\n", letra);
    }

    printf("\n");
    
    return 0;
}
