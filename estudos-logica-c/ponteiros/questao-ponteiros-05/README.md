# Exercício 05: Conversão de Moeda por Referência

Este projeto implementa uma função em C que realiza a conversão de valores monetários (de Dólar para Real) manipulando diretamente o valor na memória por meio de ponteiros, sobrescrevendo a variável original com o resultado convertido.

## 📋 Enunciado da Questão

Faça uma função `converterParaReal` que recebe um ponteiro para double (valor em dólar) e uma taxa de câmbio (double). A função deve multiplicar o valor em dólar pela taxa, transformando-o em reais e sobrescrevendo a variável original.

* **Exemplo de Fluxo:** Se a variável original armazenava `10.0` (dólares) e a taxa de câmbio informada for `5.0`, após a execução da função a mesma variável passará a guardar `50.0` (reais).

### 📊 Requisitos de Saída

O programa demonstra o efeito da conversão exibindo os estados da moeda no console:
1. **Estado Inicial:** Exibição do valor original em dólares e da taxa de câmbio definida.
2. **Processamento:** Chamada da função passando os endereços de memória das variáveis.
3. **Estado Final:** Exibição da mesma variável de origem, agora contendo o valor total convertido para reais com precisão decimal.

---

## 🛠️ Conceitos Aplicados

* **Ponteiros com Tipo de Precisão Dupla (double):** Uso de referências (`double *`) para manipulação de dados de ponto flutuante de alta precisão, ideal para aplicações financeiras.
* **Sobrescrita de Memória (Destructive Update):** Atualização direta do valor contido no endereço apontado, substituindo o dado antigo pelo novo resultado gerado sem ocupar espaço adicional.
* **Passagem por Referência:** Uso do operador de endereço (`&dolar`, `&taxaCambio`) na função `main` para dar permissão de escrita e leitura à função de conversão.
* **Formatação de Tipos Flutuantes:** Controle e exibição de dados monetários utilizando o especificador `%.2f` para limitar a saída visual a duas casas decimais.

## 🚀 Execução

Para compilar e rodar o projeto localmente:

```bash
gcc questao05.c -o questao05
./questao05