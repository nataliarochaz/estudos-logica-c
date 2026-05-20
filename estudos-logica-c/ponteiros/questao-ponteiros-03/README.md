# Exercício 03: Deslocamento de Coordenadas em Quadrantes

Este projeto implementa uma função em C que simula o deslocamento de um ponto no plano cartesiano, utilizando ponteiros para alterar diretamente os valores das coordenadas com base na sua localização espacial.

## 📋 Enunciado da Questão

Desenvolva uma função que receba dois endereços de variáveis para as coordenadas **x** e **y** de um ponto e aplique as seguintes regras de translação:

* **Regra 1:** Se o ponto estiver no primeiro quadrante (`x > 0` e `y > 0`), ele é deslocado para `(x + 2, y + 3)`.
* **Regra 2:** Caso contrário, o ponto é deslocado para `(x - 1, y - 2)`.

### 📊 Requisitos de Saída

O programa realiza testes com diferentes localizações para validar a lógica de quadrantes:
1.  **Cenário Primeiro Quadrante:** Demonstração do deslocamento positivo de um ponto com coordenadas originalmente positivas.
2.  **Cenário Fora do Primeiro Quadrante:** Demonstração do deslocamento negativo aplicado quando uma ou ambas as coordenadas são menores ou iguais a zero.
3.  **Comparativo:** Exibição do estado do ponto antes e depois de passar pela função de translação.

---

## 🛠️ Conceitos Aplicados

* **Passagem de Parâmetros por Referência:** Uso de ponteiros (`int *x`, `int *y`) para permitir a modificação das coordenadas fora do escopo local da função.
* **Lógica Condicional com Operadores Lógicos:** Uso do operador relacional composto (`&&`) para verificar se as duas condições necessárias para pertencer ao primeiro quadrante são verdadeiras simultaneamente.
* **Translação Espacial Discreta:** Aplicação de operações aritméticas simples de adição e subtração diretamente nos valores apontados pelas variáveis de referência.
* **Modularização:** Separação da regra de negócio (movimentação das coordenadas) em uma função exclusiva, mantendo a função `main` apenas para os testes de console.

## 🚀 Execução

Para compilar e rodar o projeto localmente:

```bash
gcc questao03.c -o questao03
./questao03