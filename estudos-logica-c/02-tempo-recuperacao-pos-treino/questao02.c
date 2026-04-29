#include <stdio.h>

int ehPeriodoManha(float hora){
    if (hora >= 6 && hora <= 12){
        return 1;
    } else {
        return 0;
    }
}

float calcula_Tempo_Recuperacao_Basico(int qtExerc, float hora, int intensidade){
    float tempRec; 

    if (qtExerc<=3){
            tempRec = 1;
    } else if (qtExerc >=4 && qtExerc <=6){
        if (ehPeriodoManha(hora) == 1){
            tempRec = 2;
        } else {
            tempRec = 3;
        }   
    } else {
        if (intensidade < 50){
            tempRec = intensidade / 5.0;
        } else {
            tempRec = intensidade / 4.0;
        }
    }

    return tempRec;

}

float ajuste_por_idade (float tempRec, int idade){
    if (idade >= 18 && idade <= 30){
        tempRec = tempRec;
    } else if (idade >= 31 && idade <= 50){
        tempRec = tempRec + 0.5;
    } else if (idade > 50){
        tempRec = tempRec +1.0;
    } else {
        printf("Idade Inválida");
    }

    return tempRec;
}

void exibe_tempo_recuperacao_final (int qtExerc, float horas, int idade, int intensidade){
    float tempRec;
   
    tempRec = calcula_Tempo_Recuperacao_Basico(qtExerc, horas, intensidade);
    tempRec = ajuste_por_idade (tempRec, idade);

    printf("Tempo de recuperacao de %.1f horas\n", tempRec);

}

int main()
{
    int qtExerc, intensidade, idade;
    float horas;

    /* 
    printf("Quantos exercicios fez: ");
    scanf("%d", &qtExerc);

    printf("Em qual horario: ");
    scanf("%f", &horas);

    printf("Qual idade: ");
    scanf("%d", &idade);
    */

    qtExerc = 5; horas = 9; idade = 25; intensidade = 0;
    exibe_tempo_recuperacao_final(qtExerc, horas, idade, intensidade);

    qtExerc = 7; horas = 19; idade = 45; intensidade = 48;
    exibe_tempo_recuperacao_final(qtExerc, horas, idade, intensidade);

    qtExerc = 8; horas = 10; idade = 55; intensidade = 60;
    exibe_tempo_recuperacao_final(qtExerc, horas, idade, intensidade);

return 0;
}