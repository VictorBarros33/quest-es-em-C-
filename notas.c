#include <stdio.h>

int main() {
    float nota1, nota2, nota3, maiorNota;
    int idade;

    // Solicita as notas do usuário
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);

    // Solicita a idade do usuário
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Calcula a maior nota
    maiorNota = nota1;
    if (nota2 > maiorNota) {
        maiorNota = nota2;
    }
    if (nota3 > maiorNota) {
        maiorNota = nota3;
    }

    // Exibe os resultados
    printf("\nResultados:\n");
    printf("Idade: %d anos\n", idade);
    printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
    printf("Maior nota no semestre: %.2f\n", maiorNota);

    return 0;
}
