#include <stdio.h>

void movSonda2D (int *x, int *y){
    int xTemp = *x, yTemp = *y;

    if ((*x) >= 0){
        (*x) = (xTemp + yTemp);
        (*y) = (yTemp - 5);
    } else {
        (*x) = (xTemp - yTemp);
        (*y) = (yTemp + 10);
    }
        return;
    }



int main()
{

    int x = 10, y = 20;

printf("Antes: x = %d e y = %d\n", x, y);

    movSonda2D(&x, &y);

printf("Depois: x = %d e y = %d\n", x, y);

    return 0;
}