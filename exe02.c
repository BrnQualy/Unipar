#include <stdio.h>

int main() {
    double altura, peso_ideal;
    char sexo;

    printf("Digite a altura (em m): ");
    scanf("%lf", &altura);
    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);
    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (450.7 * altura) / 10;
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (400.7 * altura) / 10;
    } else {
        printf("Sexo invalido. Por favor, digite M para masculino ou F para feminino.\n");
        return 0;
    }
    printf("O peso ideal e: %.2lf kg\n", peso_ideal);
    return 0;
}