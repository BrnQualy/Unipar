#include <stdio.h>
#include <stdlib.h>

int main() {
    double altura, base, area;
    int cont = 0;

    do {
printf("Digite a altura: ");
scanf("%lf", &altura);
printf("Digite o valor da base: ");
scanf("%lf", &base);

area = (base * altura) / 2;

printf("Area do triangulo: %.2lf\n", area);
cont++;
    } while (cont < 6);
    return 0;
}