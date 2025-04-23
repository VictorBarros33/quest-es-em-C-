// função recursiva fatorial 

#include <stdio.h>  // Biblioteca de entrada e saída padrão

// Função recursiva para calcular o fatorial
int fatorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else 
        return n * fatorial(n - 1);
}

int main() {
    int escolha;

    do {
        printf("\n---- Calculadora Fatorial ----\n");
        printf("1. Calcular fatorial\n");
        printf("2. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        if (escolha == 1) {
            int numero;
            printf("Digite um numero inteiro nao negativo: ");
            scanf("%d", &numero);

            if (numero < 0)
                printf("Fatorial nao definido para numeros negativos.\n");
            else
                printf("Fatorial de %d é: %d\n", numero, fatorial(numero));
        } 
        else if (escolha == 2) {
            printf("Encerrando o programa...\n");
        } 
        else {
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while (escolha != 2);

    return 0;
}
