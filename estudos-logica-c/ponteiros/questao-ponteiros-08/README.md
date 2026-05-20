# Exercício 08: Sistema de Regeneração com Limitadores (Hard Cap)

Este projeto implementa uma mecânica de jogo em C que gerencia os atributos de vida e energia de um personagem. O sistema avalia o estado atual do jogador e aplica regras de regeneração por referência, utilizando travas de segurança para garantir que nenhum atributo ultrapasse o limite máximo permitido.

## 📋 Enunciado da Questão

Crie uma função chamada `regenerar` que receba os pontos de vida e os pontos de energia de um personagem (ambos inteiros por referência). A função deve modificar os dois valores seguindo as regras de negócio:

* **Cenário de Crise (Vida < 30):**
    * A vida é duplicada (`vida * 2`).
    * A energia é reduzida à metade (`energia / 2`).
* **Cenário Regular (Vida >= 30):**
    * A vida é acrescida em 10 pontos.
    * A energia é acrescida em 20 pontos.
* **Trava de Segurança (Limitador):**
    * Após as modificações, nem a vida e nem a energia podem ultrapassar o limite máximo de **100 pontos**. Caso ultrapassem, o valor deve ser fixado em 100.

### 📊 Requisitos de Saída

O programa implementa testes automatizados para validar a integridade dos atributos em situações críticas e de estouro de limite:
1. **Teste de Crise:** Demonstração do comportamento de recuperação acelerada de vida com o custo de perda de energia.
2. **Teste de Estouro (Cap):** Demonstração dos atributos sendo incrementados em estado regular e sendo travados com sucesso no teto máximo de 100 pontos.
3. **Logs de Comparação:** Exibição clara no console dos estados "Inicial" e "Atual" de ambos os atributos após a execução da função.

---

## 🛠️ Conceitos Aplicados

* **Manipulação de Atributos por Referência:** Uso de ponteiros inteiros (`int *vida`, `int *energia`) para persistir as alterações de status diretamente no escopo do personagem.
* **Algoritmo de Teto Máximo (Hard Caping):** Implementação de checagens condicionais pós-processamento (`if (*variavel > 100)`) para limitar o valor máximo das variáveis, um conceito essencial no desenvolvimento de jogos para evitar bugs de atributos infinitos.
* **Lógica Condicional de Escopo Sequencial:** Uso de estruturas condicionais separadas — uma para determinar a regra de regeneração baseada no estado atual e outras para aplicar as travas de segurança independentes.
* **Testes Automatizados com Reinicialização:** Configuração da função `main` para rodar múltiplos perfis de personagens sequencialmente, limpando e atualizando a memória a cada ciclo.

## 🚀 Execução

Para compilar e rodar o projeto localmente:

```bash
gcc questao08.c -o questao08
./questao08