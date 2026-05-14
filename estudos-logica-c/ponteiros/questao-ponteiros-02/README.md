# Exercício 02: Manipulação de Variáveis por Referência

Este projeto implementa uma função em C que manipula dois valores inteiros diretamente na memória, utilizando ponteiros para aplicar transformações aritméticas baseadas em condições lógicas.

## 📋 Enunciado da Questão

Desenvolva uma função que receba dois endereços de variáveis inteiras (a e b) e aplique as seguintes regras:

*   **Regra 1:** Se `a > b`, então `a = a + b` e `b = a - b` (utilizando o valor original de a).
*   **Regra 2:** Caso contrário, `a = a * b` e `b = b / a` (desde que o valor original de `a` seja diferente de zero).

### 📊 Requisitos de Saída

O programa realiza testes com diferentes cenários para validar a lógica:
1.  **Cenário A > B:** Demonstração da soma e subtração por referência.
2.  **Cenário A <= B:** Demonstração da multiplicação e divisão, com verificação de segurança para divisão por zero.
3.  **Comparativo:** Exibição dos estados "Antes" e "Depois" de cada chamada no console.

---

## 🛠️ Conceitos Aplicados

*   **Ponteiros e Endereçamento:** Recebimento de endereços de memória para alteração persistente de dados fora do escopo da função.
*   **Segurança de Dados (Variáveis Temporárias):** Uso de `aTemp` e `bTemp` para preservar os valores originais durante o cálculo, garantindo que a segunda atribuição não seja afetada pela alteração da primeira.
*   **Lógica Condicional Encadeada:** Uso de `if` e `else if` para tratar as regras de negócio e a restrição matemática (`a != 0`).
*   **Operadores Aritméticos:** Prática com soma, subtração, multiplicação e divisão inteira.
*   **Modularização:** Separação da lógica de cálculo (função) da lógica de teste e interação com o usuário (`main`).

## 🚀 Execução

Para compilar e rodar o projeto localmente:

```bash
gcc questao05.c -o questao05
./questao05