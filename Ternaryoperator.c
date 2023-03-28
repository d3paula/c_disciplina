#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    // Calcular
    const char *resultado = (a < 0) ? ((a % 2 == 0) ? "Negativo Par" : "Negativo Ímpar") : ((a % 2 == 0) ? "Positivo Par" : "Positivo Ímpar");
    printf("O resultado é %s", resultado);
}