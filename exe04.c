#include <stdio.h>

int main() {
    int i= 0;
    double valor, soma = 0;

    while(i < 20) {
        printf("Digite um valor: ");
        scanf("%lf", &valor);

        soma += valor;
        i++;
    }
    printf("A somatoria dos valores: %.2lf\n", soma);
    return 0;
}