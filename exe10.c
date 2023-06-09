#include <stdio.h>

float calcular_media() {
    float n1, n2, n3, n4, media;
    printf("Digite as 4 notas:\n");
    printf("Nota 1: ");
    scanf("%f", &n1);
    printf("Nota 2: ");
    scanf("%f", &n2);
    printf("Nota 3: ");
    scanf("%f", &n3);
    printf("Nota 4: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("Notas: %.2f, %.2f, %.2f, %.2f\n", n1, n2, n3, n4);
    printf("Media: %.2f \n", media);
    return media;
}
void verificar(float media) {
    if (media >= 6.0) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado!\n");
    }
}
int main() {
    char opcao;
    do {
        float media = calcular_media();
        verificar(media);

        printf("\n Deseja fazer novo cálculo? (S/N): ");
        scanf(" %c", &opcao);
    } while (opcao == 'S' || opcao == 's');
    printf("Fim de execução - Tudo de bom.\n");
    return 0;
}