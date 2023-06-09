#include <stdio.h>
#include <math.h>

#define linhas 4
#define colunas 5

int main() {
    int matriz[linhas][colunas];
    int i, e, soma_coluna, soma_total;

    printf("Digite os valores da matriz (4x5):\n");
    for (i = 0; i < linhas; i++) {
        for (e = 0; e < colunas; e++) {
            printf("Valor para a posicao  linha [%d] | coluna [%d]: ", i, e);
            scanf("%d", &matriz[i][e]);
        }
    }
    printf("\nSomatoria das colunas:\n");
    for (e = 0; e < colunas; e++) {
        soma_coluna = 0;
        for (i = 0; i < linhas; i++) {
            soma_coluna += matriz[i][e];
        }
        printf("Coluna %d: %d\n", e + 1, soma_coluna);
        if (e == 0) {
            soma_total = soma_coluna;
        } else {
            soma_total += soma_coluna;
        }
    }
    printf("Somatoria total: %d\n", soma_total);

    return 0;
}
