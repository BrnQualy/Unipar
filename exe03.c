#include <stdio.h>

int exercicio1() {
    printf("Executando o exercicio 1 \n");
}

int exercicio2() {
    printf("Executando o exercicio 2 \n");
}

int exercicio4() {
    printf("Executando o exercicio 4 \n");
}

int main() {
    int opcao;

    do {
        printf("1 - Exercicio 1\n");
        printf("2 - Exercicio 2\n");
        printf("4 - Exercicio 4\n");
        printf("5 - Fim\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                exercicio1();
                break;
            case 2:
                exercicio2();
                break;
            case 4:
                exercicio4();
                break;
            case 5:
                printf("Fim de execucao, tudo de bom.\n");
                break;
            default:
                printf("Opcao invalida. Por favor, digite uma opcao valida.\n");
                break;
        }

    } while (opcao != 5);

    return 0;
}