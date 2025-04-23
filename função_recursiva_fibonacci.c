#include <stdio.h>

// Função recursiva para calcular o n-ésimo termo da sequência de Fibonacci
int fibonacci(int n) {
    if (n == 0)
        return 0;  // caso base
    else if (n == 1)
        return 1;  // caso base
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // chamada recursiva
}

int main() {
    int n;

    printf("Digite o valor de n (posicao na sequencia de Fibonacci): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("A posição deve ser um numero inteiro nao negativo.\n");
    } else {
        int resultado = fibonacci(n);
        printf("O %d. termo da sequencia de Fibonacci e: %d\n", n, resultado);
    }

    return 0;
}
