#include <stdio.h>

int main()
{
    float preco[5];
    int produto, quant;
    float total_usuario;

    for (int i = 0; i<5; i++){
        printf("Digite o preco do produto %d: R$", i+1);
        scanf("%f", &preco[i]);
    }

    for (int usuario =1; usuario<=3; usuario++){
        total_usuario = 0;

        printf("Digite o n do produto [ 1 a 5 ] ou [ 0 ] para finalizar: ");
        scanf("%d", &produto);

        while (produto != 0)
        {
            if (produto >= 1 && produto <= 5){
                printf("Digite a quantidade desejada: ");
                scanf("%d", &quant);
                
                float custo_item = preco[produto - 1] * quant;
                total_usuario += custo_item;
                
                printf("Subtotal deste item: R$%.2f\n", custo_item);
                
            } else {
                printf("Produto invalido! Escolha de [ 1 a 5 ]\n");
                
            }
            
            printf("\nDigite o n do produto [ 1 a 5 ] ou [ 0 ] para finalizar: ");
            scanf("%d", &produto);
        }
        
        printf("\n>>> FIM DAS COMPRAS DO USUARIO %d <<<\n", usuario);
        printf("Total a pagar: R$%.2f\n", total_usuario);
    }
    
    return 0;
}