#include "ListaOrdenada.h"

int main() {
  LISTA lista;
  REGISTRO reg;

  // Inicializar a lista
  inicializarLista(&lista);

  // Exibir lista vazia
  exibirLista(&lista);
  printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
  printf("Tamanho inicial da capacidade: %i elementos.\n", lista.capacidade);

  // Teste de inserção e redimensionamento para duplicação
  printf("\nInserindo elementos para testar duplicação...\n");
  for (int i = 0; i < 55; i++) { // Insere 55 elementos
    reg.chave = i;
    inserirElemListaOrd(&lista, reg);
    if (i == 50) {
      printf("Capacidade duplicada para: %i elementos.\n", lista.capacidade);
    }
  }
  exibirLista(&lista);
  printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
  printf("Capacidade atual da lista: %i.\n", lista.capacidade);

  // Teste de remoção e redimensionamento para redução
  printf("\nRemovendo elementos para testar redução...\n");
  for (int i = 54; i >= 0; i--) { // Remove todos os elementos
    excluirElemLista(&lista, i);
    if (lista.nroElem == lista.capacidade / 4 && lista.capacidade > 50) {
      printf("Capacidade reduzida para: %i elementos.\n", lista.capacidade);
    }
  }
  exibirLista(&lista);
  printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
  printf("Capacidade final da lista: %i.\n", lista.capacidade);

  // Reinicializar a lista
  reinicializarLista(&lista);
  printf("\nLista reinicializada.\n");
  exibirLista(&lista);
  printf("Numero de elementos na lista: %i.\n", tamanho(&lista));
  printf("Capacidade reinicializada: %i.\n", lista.capacidade);

  return 0;
}
