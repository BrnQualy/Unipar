#include <stdio.h>

int main() {
    const int tamanho = 10;
    int valores[tamanho];
    int i;
    int maior, menor;
    int posicao_maior, posicao_menor;

    printf("Digite 10 valores maiores que zero:\n");
    for (i = 0; i < tamanho; i++) {
        do {
            printf("Valor %d: ", i + 1);
            scanf("%d", &valores[i]);
        } while (valores[i] <= 0);
    }
    maior = menor = valores[0];
    posicao_maior = posicao_menor = 0;
    for (i = 1; i < tamanho; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
            posicao_maior = i;
        }
        if (valores[i] < menor) {
            menor = valores[i];
            posicao_menor = i;
        }
    }
    printf("Maior valor: %d (ranking: %d)\n", maior, posicao_maior);
    printf("Menor valor: %d (ranking: %d)\n", menor, posicao_menor);

    return 0;
}