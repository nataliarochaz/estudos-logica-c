# Exercício 01: Monitoramento de Consumo de Bateria

Este projeto consiste em um sistema modularizado para calcular e comparar o consumo de bateria de dispositivos móveis ao longo de um período de 30 dias.

## 📋 Enunciado da Questão

Um aplicativo monitora o consumo de bateria de um celular ao longo dos dias. O consumo total (ci) é formado por dois fatores: 
**ci = ui + si**

Onde:
* **ui** (Consumo Aplicativos) = 5 * i
* **si** (Consumo Sistema) = 30 + 2 * i

### Requisitos:
* **a)** Criar a função `calcularConsumoAplicativos(i)` que retorne ui.
* **b)** Criar a função `calcularConsumoSistema(i)` que retorne si.
* **c)** Criar a função `calcularConsumoTotal(i)` que retorne ci, usando as funções anteriores.
* **d)** Criar a função `compararConsumoEntreDias(i, j)` (com j > i) que mostre o consumo dos dois dias e a diferença entre eles. Use obrigatoriamente `calcularConsumoTotal`.
* **e)** Construir um programa que pergunte ao usuário o número de 2 dias (1 a 30) e mostre os resultados.

**Exemplo de Saída:**
> Dia 2: 44%  
> Dia 5: 65%  
> Diferença entre os dias: 21%

---

## 🛠️ Conceitos Aplicados

* **Modularização com funções:** Uso de tipos de retorno `int` para cálculos e `void` para funções de exibição de dados.
* **Entrada de dados interativa:** Implementação de `scanf` para captura de dados via teclado com manipulação de ponteiros de memória (&).
* **Lógica aritmética:** Tradução de fórmulas matemáticas para lógica de programação e manipulação de variáveis.
* **Formatação de saída:** Controle de strings e caracteres especiais no console para uma interface limpa.

## 🚀 Execução

Para compilar e rodar o projeto localmente, utilize os comandos abaixo no terminal:

```bash
gcc questao01.c -o questao01
./questao01