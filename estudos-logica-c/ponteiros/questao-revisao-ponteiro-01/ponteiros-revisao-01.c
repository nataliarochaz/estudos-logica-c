#include <stdio.h>

void alterarValor (int *numero){
    (*numero) = (*numero) * 2;
}


int main()
{
    int num = 10;
    alterarValor(&num);

    printf("O valor era: %d\nE agora e: %d", num/2, num);

    return 0;
} 