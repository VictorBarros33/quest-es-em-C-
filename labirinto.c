#include <stdio.h>

#define N 5

// Labirinto: 0 = caminho livre, 1 = parede, 9 = sa�da
int labirinto[N][N] = {
    {0, 1, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {0, 0, 0, 1, 0},
    {1, 1, 1, 1, 0},
    {0, 0, 0, 1, 9}
};

int visitado[N][N];

// Fun��o para imprimir o labirinto com o caminho percorrido
void imprimirLabirinto() {
	int i, j;
    for ( i = 0; i < N; i++) {
        for ( j = 0; j < N; j++) {
            if (labirinto[i][j] == 1)
                printf(" #"); // parede
            else if (labirinto[i][j] == 9)
                printf(" S"); // sa�da
            else if (visitado[i][j])
                printf(" ."); // caminho percorrido
            else
                printf("  "); // espa�o livre
        }
        printf("\n");
    }
}

// Fun��o recursiva para encontrar a sa�da
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

    // Tenta as 4 dire��es
    if (escapar(x - 1, y)) return 1;
    if (escapar(x + 1, y)) return 1;
    if (escapar(x, y - 1)) return 1;
    if (escapar(x, y + 1)) return 1;

    // Se n�o encontrou sa�da, desfaz o caminho (backtrack)
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
        printf("Caminho at� a sa�da encontrado:\n");
    } else {
        printf("N�o foi poss�vel encontrar a sa�da.\n");
    }

    imprimirLabirinto();

    return 0;
}
