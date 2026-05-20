#include <stdio.h>

void endereco (int *x, int *y){

    if (*x > 0 && *y>0){
        *x = *x +2;
        *y = *y +3;
    } else {
        *x = *x - 1;
        *y = *y - 2;
    }

    return;
}

int main()
{
    int x=10, y=5;

    printf("Ponto no primeiro quadrante: %d e %d\n", x, y);
    endereco (&x, &y);
    printf("Primeiro quadrante se torna: %d e %d\n\n", x, y);

    x=-2;
    y=-4;

    printf("Ponto no primeiro quadrante: %d e %d\n", x, y);
    endereco (&x, &y);
    printf("Primeiro quadrante se torna: %d e %d", x, y);

    return 0;
}