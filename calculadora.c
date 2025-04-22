#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário um número entre 1 e 10
    while (1) {
        printf("Digite um número entre 1 e 10: ");
        scanf("%d", &numero);

        // Valida se o número está no intervalo entre 1 e 10
        if (numero >= 1 && numero <= 10) {
            break;  // Se o número for válido, sai do loop
        } else {
            printf("Número inválido! Por favor, digite um número entre 1 e 10.\n");
        }
    }

    // Imprime a tabuada do número digitado
    printf("\nTabuada do %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
