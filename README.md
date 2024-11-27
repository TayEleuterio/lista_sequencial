# Lista Sequencial Ordenada com Redimensionamento Dinâmico

## Descrição

Este projeto consiste na modificação de uma implementação de uma lista sequencial ordenada em C/C++ para que ela suporte redimensionamento dinâmico. A lista é capaz de expandir ou reduzir seu tamanho automaticamente conforme o número de elementos inseridos ou removidos, otimizando o uso de memória.

## Funcionalidades

- **Capacidade Inicial:** A lista começa com uma capacidade de 50 elementos.
- **Expansão Dinâmica:** Quando a lista atinge sua capacidade máxima, seu tamanho é duplicado usando alocação dinâmica de memória.
- **Redução Dinâmica:** Para economizar memória, a capacidade da lista é reduzida pela metade quando o número de elementos cai para 25% da capacidade total.
- **Redimensionamento:** Utiliza a função `realloc` para ajustar dinamicamente a capacidade da lista sem perder os dados armazenados.

## Arquivos do Projeto

### Arquivo de Cabeçalho (`ListaOrdenada.h`)

Define as estruturas de dados e declarações de funções utilizadas para manipular a lista.

### Arquivo de Implementação (`ListaOrdenada.c`)

Contém as definições das funções declaradas no cabeçalho, incluindo a lógica para redimensionamento dinâmico.

### Arquivo Principal (`ClienteOrdenada.c`)

Testa a implementação da lista, exibindo a capacidade inicial, testando a duplicação e redução de capacidade e reinicializando a lista.
