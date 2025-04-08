#include <stdio.h>

void verificarParOuImpar()
{
    int numero;
    printf("Digite um número: ");
    if (scanf("%d", &numero) != 1)
    {
        printf("Entrada inválida.\n");
        return;
    }
    if (numero % 2 == 0)
    {
        printf("O número %d é par.\n", numero);
    }
    else
    {
        printf("O número %d é ímpar.\n", numero);
    }
}

void imprimirNumeros()
{
    printf("Os números de 1 a 10 são:\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int opcao;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Verificar se um número é par ou ímpar\n");
        printf("2. Imprimir os números de 1 a 10\n");
        printf("3. Sair do programa\n");
        printf("Escolha uma opção: ");

        if (scanf("%d", &opcao) != 1)
        {
            printf("Entrada inválida. Tente novamente.\n");
            // Limpa o buffer e continua
            while (getchar() != '\n')
                ;
            continue;
        }

        switch (opcao)
        {
        case 1:
            verificarParOuImpar();
            break;
        case 2:
            imprimirNumeros();
            break;
        case 3:
            printf("Saindo do programa. Até logo!\n");
            return 0;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    }

    return 0;
}
