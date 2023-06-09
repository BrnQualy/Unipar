#include <stdio.h>

int main() {
    int fahrenheit;
    float celsius;

    printf("Tabela: Fahrenheit para Celsius\n");
    printf("Fahrenheit | Celsius\n");
    
    for (fahrenheit = 40; fahrenheit <= 60; fahrenheit++) {
        celsius = (float)(5.0 / 9.0) * (fahrenheit - 32);
        printf("%d | %.2f\n", fahrenheit, celsius);
    }
    return 0;
}