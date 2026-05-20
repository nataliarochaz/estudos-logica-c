# Exercício 06: Ajuste Dinâmico de Limites de Velocidade

Este projeto implementa uma função em C que simula o sistema de controle de um veículo. A função monitora e ajusta simultaneamente a velocidade atual e a velocidade máxima permitida, aplicando correções matemáticas diretamente na memória por meio de ponteiros.

## 📋 Enunciado da Questão

Escreva uma função chamada `ajustarLimites` que receba a velocidade atual e a velocidade máxima de um veículo (ambas por referência). A função deve modificar ambos os valores com base nas seguintes condições:

* **Cenário de Infração (Velocidade Atual > Velocidade Máxima):** * A velocidade atual é reduzida para 90% da velocidade máxima (`0.9 * velMax`).
    * A velocidade máxima é aumentada em 10% (`velMax + 0.1 * velMax`).
* **Cenário Regular (Velocidade Atual <= Velocidade Máxima):** * A velocidade atual é aumentada em 5% da velocidade máxima (`velAtual + 0.05 * velMax`).
    * A velocidade máxima é reduzida em 2% (`velMax - 0.02 * velMax`).

### 📊 Requisitos de Saída

O programa executa testes automatizados cobrindo ambas as regras de negócio para validar o comportamento dos ponteiros:
1. **Teste de Ultrapassagem:** Demonstração do algoritmo agindo para reduzir a velocidade do veículo e expandir o limite tolerado.
2. **Teste de Fluxo Normal:** Demonstração do veículo acelerando com segurança enquanto o limite máximo sofre uma leve redução adaptativa.
3. **Logs de Comparação:** Exibição clara no console dos valores "Antes" (Velocidade/Máxima) e "Depois" (Ajuste Atual/Ajuste Máxima).

---

## 🛠️ Conceitos Aplicados

* **Manipulação Simultânea de Múltiplas Referências:** Passagem de múltiplos ponteiros (`float *velAtual`, `float *velMax`) para uma mesma função, permitindo que mais de uma variável do escopo externo seja modificada de uma só vez.
* **Cálculos de Porcentagem e Fatores de Ajuste:** Uso de operadores aritméticos para calcular acréscimos e decréscimos percentuais baseados em uma variável de controle (`velMax`).
* **Lógica Condicional com Valores Apontados:** Utilização de estruturas `if/else` avaliando diretamente o conteúdo dos endereços de memória (desreferenciação) para determinar o fluxo de execução.
* **Modularização de Regras de Negócio:** Isolamento da lógica de controle de tráfego em uma função dedicada com retorno `void`, deixando a `main` responsável apenas pela carga dos cenários de teste.

## 🚀 Execução

Para compilar e rodar o projeto localmente:

```bash
gcc questao06.c -o questao06
./questao06