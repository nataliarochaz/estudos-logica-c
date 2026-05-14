# Exercício 04: Simulação de Movimentação de Sonda - 2D

Este projeto consiste em uma função que simula o deslocamento de uma sonda em um plano bidimensional, utilizando manipulação de ponteiros para atualizar as coordenadas de localização no espaço.

## 📋 Enunciado da Questão

Desenvolva uma função que simula a movimentação de uma sonda no espaço 2D. A função deve receber as coordenadas **x** e **y** por referência. 

* **Regra de Movimentação 1:** Se **x** for positivo ou zero, a sonda move-se para `(x + y, y - 5)`.
* **Regra de Movimentação 2:** Caso contrário (x negativo), a sonda move-se para `(x - y, y + 10)`.

### 📊 Requisitos de Saída

A execução deve demonstrar a alteração dos valores originais das variáveis através da função:
* **Estado Inicial:** Exibição das coordenadas `x` e `y` antes da chamada da função.
* **Estado Final:** Exibição das novas coordenadas após o processamento da lógica de movimentação por referência.

---

## 🛠️ Conceitos Aplicados

* **Passagem de Parâmetros por Referência:** Uso de ponteiros (`int *x`, `int *y`) para permitir que a função altere diretamente os valores das variáveis declaradas na função `main`.
* **Desreferenciação:** Uso do operador asterisco (`*`) para acessar e modificar o conteúdo armazenado nos endereços de memória recebidos.
* **Variáveis Temporárias:** Implementação de variáveis de suporte (`xTemp`, `yTemp`) para garantir que os cálculos da nova posição não utilizem valores já alterados durante a execução da lógica.
* **Lógica Condicional:** Aplicação de estruturas `if/else` para determinar o comportamento da sonda com base no estado da coordenada `x`.
* **Manipulação de Endereços:** Uso do operador comercial (`&`) na chamada da função para enviar o endereço de memória das variáveis.

## 🚀 Execução

Para compilar e rodar o projeto localmente:

```bash
gcc questao04.c -o questao04
./questao04