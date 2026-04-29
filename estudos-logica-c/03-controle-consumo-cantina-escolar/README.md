# Exercício 03: Controle de Consumo - Cantina Escolar

Este projeto implementa um sistema de monitoramento de vendas diárias para uma cantina escolar, processando o consumo de diversos alunos ao longo de uma semana (7 dias).

## 📋 Enunciado da Questão

O programa deve registrar o gasto individual de cada aluno por dia até que o valor **0** seja digitado. O sistema deve processar os dados para gerar relatórios diários de desempenho e um consolidado final da semana.

### 📊 Requisitos de Saída

#### 1. Resumo Diário (Exibido ao final de cada um dos 7 dias):
* **Maior valor gasto:** O maior consumo individual registrado entre os alunos daquele dia.
* **Valor médio gasto:** A média aritmética das vendas do dia.
* **Total arrecadado:** A soma de todos os consumos do dia.

#### 2. Resumo da Semana (Exibido após o 7º dia):
* **Total arrecadado na semana:** Soma total de todos os valores registrados nos 7 dias.
* **Dia com maior arrecadação:** Identificação de qual dia (1 a 7) teve o maior volume de vendas.
* **Valor do recorde:** O valor arrecadado no dia de maior produtividade.

---

## 🛠️ Conceitos Aplicados

* **Estruturas de Repetição Aninhadas:** Uso de `for` para a contagem dos dias e `while` para a entrada dinâmica de alunos.
* **Lógica de Comparação (Máximos):** Implementação de algoritmos para encontrar o maior valor gasto por aluno (diário) e o maior faturamento total (semanal).
* **Acumuladores e Incrementação:**
    * Uso de **incremento unitário** (`alunoI++`, `gastoAlunos++`) para o controle sequencial dos alunos e contagem necessária para o cálculo da média.
    * Uso de **atribuição composta** (`totalDia += valor`, `totalSemana += totalDia`) para acumular os valores financeiros de forma contínua durante a execução.
* **Acumuladores e Contadores:** Gerenciamento de variáveis para somas parciais, somas globais e contagem de registros para média.
* **Modularização de Fluxo:** Organização da entrada de dados com condição de parada (`flag`).

## 🚀 Execução

Para compilar e rodar o projeto localmente:

```bash
gcc questao03.c -o questao03
./questao03