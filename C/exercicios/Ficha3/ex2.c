/*

Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura
de senha incorreta informada, escrever a mensagem “Senha Invalida”. Quando a senha for
informada corretamente deve ser impressa a mensagem “Acesso Permitido” e o programa deve ser
encerrado. Considere que a senha correta é o valor 123456.

*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int senha, senha_valida = 123456;

    printf("\nDigite a senha: ");
    scanf("%d", &senha);

    while(senha != senha_valida) {
        printf("\nSenha Invalida\n");
        printf("\nDigite a senha: ");
        scanf("%d", &senha);
    }

    printf("\nAcesso Permitido!\n");

    return 0;
}
