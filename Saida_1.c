#include <stdio.h>

int main()
{
    float dividendo, divisor;
    printf("Entre com dois numeros reais:\n");
    fflush(stdin);
    scanf("%f %f", &dividendo, &divisor);
    printf("A divisao de %.2f por %.2f vale %.2f", dividendo, divisor, dividendo / divisor);
    printf("|%-5.2f|\n", 2.04);
    printf("|%5.2f|\n", 2.04);
    printf("|%010.5d|\n", 102);
    return (0);
}