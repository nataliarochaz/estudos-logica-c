# Exercício 02: Cálculo de Tempo de Recuperação Pós-Treino

Este projeto consiste em um sistema para uma academia que calcula o tempo de recuperação ideal para um aluno após o treino, baseando-se em volume de exercícios, intensidade, horário e idade.

## 📋 Enunciado da Questão

O sistema determina o tempo de recuperação básico através de uma tabela de decisão e, posteriormente, aplica um ajuste baseado na faixa etária.

### 1. Tabelas de Referência

**Tempo de Recuperação Básico**
| Nº de Exercícios | Intensidade Total | Manhã (6h-12h) | Outros Períodos |
| :--- | :--- | :--- | :--- |
| Até 3 | - | 1.0h | 1.0h |
| 4 a 6 | - | 2.0h | 3.0h |
| Mais de 6 | < 50 pontos | intensidade / 5 | intensidade / 5 |
| Mais de 6 | ≥ 50 pontos | intensidade / 4 | intensidade / 4 |

**Ajuste por Faixa Etária**
| Faixa Etária | Acréscimo no Tempo |
| :--- | :--- |
| 18 a 30 anos | + 0.0h |
| 31 a 50 anos | + 0.5h |
| Acima de 50 anos | + 1.0h |

### 2. Requisitos do Projeto

* **a) `ehPeriodoManha(hora)`**: Recebe a hora (0-23) e retorna 1 se for manhã (6h às 12h) ou 0 caso contrário.
* **b) `calcula_Tempo_Recuperacao_Basico(n, hora)`**: Determina o tempo inicial seguindo a primeira tabela. A intensidade deve ser perguntada apenas se necessária.
* **c) `ajuste_por_idade(tempo, idade)`**: Recebe o tempo básico e a idade, retornando o tempo final ajustado.
* **d) `exibe_tempo_recuperacao_final(n, hora, idade)`**: Consolida os dados e exibe o resultado final recomendado.
* **e) Programa Principal**: Realiza testes automatizados para diferentes cenários (período da manhã, fora da manhã e escolha livre).

---

## 🛠️ Conceitos Aplicados

* **Modularização com funções:** Uso de tipos de retorno `float` para cálculos precisos e `void` para funções de exibição de dados.
* **Entrada de dados interativa:** Implementação de `scanf` para captura de dados (incluindo condicional de intensidade) com manipulação de ponteiros de memória (&).
* **Lógica aritmética:** Tradução de regras de negócio e tabelas para lógica de programação e manipulação de variáveis.
* **Formatação de saída:** Controle de casas decimais (`%.1f`) e caracteres especiais para uma interface limpa e profissional.

## 🚀 Execução

Para compilar e rodar o projeto localmente, utilize os comandos abaixo no terminal:

```bash
gcc questao02.c -o questao02
./questao02