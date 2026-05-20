# Exercício 07: Gerenciamento de Saldo e Limite Bancário

Este projeto implementa uma função em C que simula a lógica de controle de uma conta bancária. O sistema analisa o estado financeiro do cliente e ajusta simultaneamente o saldo e o limite especial (cheque especial) diretamente na memória por meio de ponteiros.

## 📋 Enunciado da Questão

Desenvolva uma função chamada `gerenciarSaldo` que receba os endereços de memória do saldo e do limite especial de uma conta (ambos inteiros). A função deve modificar ambos os valores de acordo com as seguintes regras de negócio:

* **Cenário de Saldo Negativo (Uso do Cheque Especial):**
    * O saldo é "ajudado" e recebe integralmente o valor atual do limite especial (`saldo = limiteEspecial`).
    * O limite especial é totalmente zerado (`limiteEspecial = 0`).
* **Cenário de Saldo Positivo ou Zero (Uso Regular):**
    * O saldo recebe um acréscimo de 10% do valor do limite especial.
    * O limite especial é reduzido em 5% do seu próprio valor.

### 📊 Requisitos de Saída

O programa executa testes automatizados para validar os dois comportamentos do gerenciamento de crédito:
1. **Teste de Conta Negativada:** Demonstração do resgate de saldo utilizando o limite disponível e o consequente zeramento do crédito especial.
2. **Teste de Conta Regular:** Demonstração do rendimento de bônus sobre o saldo e o ajuste regressivo do limite especial.
3. **Logs de Comparação:** Exibição detalhada no console dos estados "Inicial" e "Atual" de ambas as variáveis após o processamento por referência.

---

## 🛠️ Conceitos Aplicados

* **Manipulação de Inteiros por Referência:** Uso de ponteiros do tipo inteiro (`int *saldo`, `int *limiteEspecial`) para alterar os estados financeiros de forma persistente fora do escopo da função.
* **Aritmética Inteira para Porcentagens:** Aplicação de cálculos percentuais utilizando apenas operadores inteiros (`(limite * 10) / 100`) para manter a consistência dos tipos de dados sem necessidade de conversão para ponto flutuante.
* **Atualização Destrutiva de Estado:** Sobrescrita direta de valores na memória para simular transações bancárias imediatas.
* **Cenários de Teste em Lote:** Estruturação da função `main` para reinicializar e testar múltiplas condições de negócio sequencialmente, validando a robustez do algoritmo.

## 🚀 Execução

Para compilar e rodar o projeto localmente:

```bash
gcc questao07.c -o questao07
./questao07