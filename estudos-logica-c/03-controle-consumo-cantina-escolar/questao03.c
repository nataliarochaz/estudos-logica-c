#include <stdio.h>

int main()
{
    float totalSemana = 0, maiorArrecadacaoSemana = -1;
    int diaVencedor = 0;

    for(int diaI = 1; diaI <= 7; diaI++){

        float totalDia = 0, maiorGastoIndividual = 0;
        int gastoAlunos = 0;

        printf("\n\nREGISTRO DE CONSUMO - DIA %d\n", diaI);

        int alunoI = 1; 
        float valor;

        printf("Digite o valor gasto pelo aluno %d: (ou 0 para sair)", alunoI);
        scanf("%f", &valor);

        while (valor != 0){

            totalDia += valor;
            gastoAlunos++;

            if (valor > maiorGastoIndividual){
                maiorGastoIndividual = valor;
            }
        
            alunoI++;
            printf("Digite o valor gasto pelo aluno %d: (ou 0 para sair)", alunoI);
            scanf("%f", &valor);
    }

    if (gastoAlunos > 0){
        printf("\nRESUMO DO DIA %d\n", diaI);
        printf("Maior valor gasto: R$%.2f\n", maiorGastoIndividual);
        printf("Valor medio gasto: R$%.2f\n", totalDia / gastoAlunos);
        printf("Total Arrecadado: R$%.2f", totalDia);
    }

    totalSemana += totalDia;
    if (totalDia > maiorArrecadacaoSemana){
        maiorArrecadacaoSemana = totalDia;
        diaVencedor = diaI;
    }
    
    }

    printf("\n\nRELATORIO DA SEMANA\n");
    printf("Total arrecadado na semana R$%.2f\n", totalSemana);
    printf("Dia com maior arrecadacao: Dia %d\n", diaVencedor);
    printf("Valor do dia que mais arrecadou: R$%.2f\n", maiorArrecadacaoSemana);
    

    return 0;
}