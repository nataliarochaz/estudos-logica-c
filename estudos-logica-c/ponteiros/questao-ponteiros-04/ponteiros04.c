#include <stdio.h>

void aplicarBonus(float *ponto, int *nivel){
    if (*nivel > 5){
        *ponto = *ponto *1.2;
    } else {
        *ponto = *ponto *1.05;
    }
    return;
}

int main()
{
    float ponto, bonus;
    int nivel;
    
    printf ("Digite a pontuacao do jogador:");
    scanf ("%f", &ponto);

    printf ("Digite o nivel do jogador:");
    scanf ("%d", &nivel);
    
    aplicarBonus (&ponto, &nivel);
    
    printf ("A pontuacao do jogador com bonus e: %.2f", ponto);

    return 0;
}