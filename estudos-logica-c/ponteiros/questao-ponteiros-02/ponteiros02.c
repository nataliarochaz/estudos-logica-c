#include <stdio.h>

void funcao (int *a, int *b){
    int aTemp = *a, bTemp = *b;
    if ((*a) > (*b)){
    (*a) = aTemp + bTemp;
    (*b) = aTemp - bTemp;

    } else if ((*a) != 0) {
    (*a) = aTemp * bTemp;
    (*b) = bTemp/aTemp;
    }

    return;

}

int main()
{
    int a=10, b=4;

printf("Antes: a = %d e b = %d\n", a, b);

    funcao(&a, &b);

printf("Depois: a = %d e b = %d\n", a, b);

    a=2;
    b=8;

printf("Antes: a = %d e b = %d\n", a, b);

    funcao(&a, &b);

printf("Depois: a = %d e b = %d\n", a, b);


    return 0;
}