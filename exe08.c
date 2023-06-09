#include <stdio.h>

#define LINHAS 4
#define COLUNAS 5

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, e, soma_coluna, soma_total;

    printf("Digite os valores da matriz (4x5):\n");
    for (i = 0; i < LINHAS; i++) {
        for (e = 0; e < COLUNAS; e++) {
            printf("Valor para a posicao [%d][%d]: ", i, e);
            scanf("%d", &matriz[i][e]);
        }
    }

    printf("\nSomatoria das colunas:\n");
    for (e = 0; e < COLUNAS; e++) {
        soma_coluna = 0;
        for (i = 0; i < LINHAS; i++) {
            soma_coluna += matriz[i][e];
        }
        printf("Coluna %d: %d\n", e + 1, soma_coluna);

        if (e == 0) {
            soma_total = soma_coluna;
        } else {
            soma_total += soma_coluna;
        }
    }

    // Imprimir a somatória total
    printf("Somatoria total: %d\n", soma_total);

    return 0;
}
