#include <stdio.h>

#define N 5

// Labirinto: 0 = caminho livre, 1 = parede, 9 = saída
int labirinto[N][N] = {
    {0, 1, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {0, 0, 0, 1, 0},
    {1, 1, 1, 1, 0},
    {0, 0, 0, 1, 9}
};

int visitado[N][N];

// Função para imprimir o labirinto com o caminho percorrido
void imprimirLabirinto() {
	int i, j;
    for ( i = 0; i < N; i++) {
        for ( j = 0; j < N; j++) {
            if (labirinto[i][j] == 1)
                printf(" #"); // parede
            else if (labirinto[i][j] == 9)
                printf(" S"); // saída
            else if (visitado[i][j])
                printf(" ."); // caminho percorrido
            else
                printf("  "); // espaço livre
        }
        printf("\n");
    }
}

// Função recursiva para encontrar a saída
int escapar(int x, int y) {
    if (x < 0 || x >= N || y < 0 || y >= N)
        return 0;

    if (labirinto[x][y] == 1 || visitado[x][y])
        return 0;

    if (labirinto[x][y] == 9) {
        visitado[x][y] = 1;
        return 1;
    }

    visitado[x][y] = 1;

    // Tenta as 4 direções
    if (escapar(x - 1, y)) return 1;
    if (escapar(x + 1, y)) return 1;
    if (escapar(x, y - 1)) return 1;
    if (escapar(x, y + 1)) return 1;

    // Se não encontrou saída, desfaz o caminho (backtrack)
    visitado[x][y] = 0;
    return 0;
}

int main() {
    // Inicializa matriz de visitados
    int i, j;
    for ( i = 0; i < N; i++)
        for ( j = 0; j < N; j++)
            visitado[i][j] = 0;

    if (escapar(0, 0)) {
        printf("Caminho até a saída encontrado:\n");
    } else {
        printf("Não foi possível encontrar a saída.\n");
    }

    imprimirLabirinto();

    return 0;
}
