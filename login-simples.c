#include <stdio.h>

#define SENHA_CORRETA 4321 // Define a senha correta como uma constante

int main() {
    int senha;

    printf("Bem-vindo! Por favor, insira a senha de 4 dígitos.\n");

    // Loop do-while para garantir que o usuário insira a senha correta
    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha != SENHA_CORRETA) {
            printf("Senha incorreta. Tente novamente.\n");
        }
    } while (senha != SENHA_CORRETA);

    // Mensagem de sucesso ao final
    printf("Senha correta! Acesso permitido.\n");

    return 0;
}
