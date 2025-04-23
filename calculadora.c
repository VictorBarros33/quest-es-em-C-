#include <stdio.h>

void exibirMenu() {
    printf("Escolha uma operação:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("0. Sair\n");
    printf("Digite sua escolha: ");
}

int main() {
    int escolha;
    double num1, num2, resultado;

    do {
        exibirMenu();
        scanf("%d", &escolha);

        if (escolha == 0) {
            printf("Encerrando a calculadora. Até mais!\n");
            break;
        }

        if (escolha < 1 || escolha > 4) {
            printf("Escolha inválida. Tente novamente.\n");
            continue;
        }

        printf("Digite o primeiro número: ");
        scanf("%lf", &num1);
        printf("Digite o segundo número: ");
        scanf("%lf", &num2);

        switch (escolha) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado: %.2lf\n", resultado);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Erro: Divisão por zero não é permitida.\n");
                } else {
                    resultado = num1 / num2;
                    printf("Resultado: %.2lf\n", resultado);
                }
                break;
        }

        printf("\n");
    } while (escolha != 0);

    return 0;
}
