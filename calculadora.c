#include <stdio.h>

void exibirMenu() {
    printf("Escolha uma opera��o:\n");
    printf("1. Adi��o\n");
    printf("2. Subtra��o\n");
    printf("3. Multiplica��o\n");
    printf("4. Divis�o\n");
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
            printf("Encerrando a calculadora. At� mais!\n");
            break;
        }

        if (escolha < 1 || escolha > 4) {
            printf("Escolha inv�lida. Tente novamente.\n");
            continue;
        }

        printf("Digite o primeiro n�mero: ");
        scanf("%lf", &num1);
        printf("Digite o segundo n�mero: ");
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
                    printf("Erro: Divis�o por zero n�o � permitida.\n");
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
