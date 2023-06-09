#include <stdio.h>
#include <math.h>

int main() {
    double L, A, C, Z;
    printf("Digite o valor de L: ");
    scanf("%lf", &L);
    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);
    Z = (L + A * 2.3) / C;
    printf("Valor de Z: %.2lf \n", Z);
    return 0;
}