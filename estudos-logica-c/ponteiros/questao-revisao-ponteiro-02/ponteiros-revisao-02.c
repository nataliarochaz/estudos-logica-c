#include <stdio.h>

void calcularRetangulo(float base, float altura, float *area, float *perim){
    *area = base * altura;
    *perim = 2 * (base + altura);
}

int main()
{
float base, altura;
float area, perim;

    printf("Digite a base e a altura: ");
    scanf("%f %f", &base, &altura);

    calcularRetangulo(base, altura, &area, &perim);

    printf ("Base: %.2f\nAltura: %.2f\nArea: %.2f\nPerimetro: %.2f", base, altura, area, perim);

    return 0;
}