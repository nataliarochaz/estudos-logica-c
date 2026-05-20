# Exercício 04: Sistema de Bônus de Pontuação por Nível

Este projeto implementa uma função em C voltada para a lógica de um jogo, onde a pontuação de um jogador é atualizada diretamente na memória através de ponteiros, aplicando um bônus percentual baseado no nível alcançado.

## 📋 Enunciado da Questão

Crie uma função chamada `aplicarBonus` que recebe um ponteiro para um float (a pontuação do jogador) e um inteiro nível. A função não retorna nada e altera diretamente a pontuação de acordo com as seguintes condições:

* **Regra 1:** Se o nível for maior que 5, a pontuação é multiplicada por `1.2` (bônus de 20%).
* **Regra 2:** Caso contrário, a pontuação é multiplicada por `1.05` (bônus de 5%).

### 📊 Requisitos de Saída

O sistema interage com o usuário e exibe os resultados dinamicamente no console:
1. **Entrada de Dados:** Captura da pontuação inicial (float) e do nível atual (int) do jogador.
2. **Processamento por Referência:** Alteração direta do valor da pontuação sem necessidade de retorno da função.
3. **Exibição do Resultado:** Apresentação da pontuação final atualizada com precisão de duas casas decimais (`%.2f`).

---

## 🛠️ Conceitos Applied

* **Modificação de Tipos Distintos por Referência:** Passagem de ponteiros de tipos diferentes (`float *` e `int *`) para manipulação de endereços específicos na memória.
* **Cálculo Percentual por Fator de Multiplicação:** Uso de operadores aritméticos para aplicar acréscimos de forma direta (`* 1.2` para 20% e `* 1.05` para 5%).
* **Entrada de Dados Dinâmica:** Captura de valores via teclado usando `scanf` com passagem de endereços (`&ponto`, `&nivel`).
* **Funções com Retorno Void:** Implementação de rotinas de processamento puro que cumprem seu objetivo modificando o escopo externo e utilizam o `return;` apenas para encerramento de fluxo.

## 🚀 Execução

Para compilar e rodar o projeto localmente:

```bash
gcc questao04.c -o questao04
./questao04