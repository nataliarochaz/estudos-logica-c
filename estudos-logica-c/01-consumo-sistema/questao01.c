#include <stdio.h>

int calcularConsumoAplicativo(int i){
    int ui = 5 * i;
    return ui;
}

int calcularConsumoSistema(int i){
    int si = 30 +2*i;
    return si;
}

int calcularConsumoTotal(int i){
    int ui = calcularConsumoAplicativo(i);
    int si = calcularConsumoSistema(i);
    int ci = ui + si;

    return ci;
}

int compararConsumoEntreDias(int i, int j){
    int consumoI = calcularConsumoTotal(i);
    int consumoJ = calcularConsumoTotal(j);

    int diferenca = consumoJ - consumoI;
    printf("\nDia %d: %d%%\n", i, consumoI);
    printf("Dia %d: %d%%\n", j, consumoJ);
    printf("Diferenca: %d%%", diferenca);
}

int main()
{

    int diaI, diaJ;
    printf("Digite um dia: ");
    scanf("%d", &diaI);

    printf("Digite outro dia: ");
    scanf("%d", &diaJ);

    compararConsumoEntreDias(diaI, diaJ);

    return 0;
}