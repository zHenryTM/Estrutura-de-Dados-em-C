#include <stdio.h>

int busca_recursiva(int valor_desejado, int vetor[], int tamanho_vetor);

int busca_recursiva(int valor_desejado, int vetor[], int tamanho_vetor) {
    /* Esta função analisa se um elemento faz parte de um vetor. Se fizer, devolve o índice
     * em que esse elemento se encontra. Se não estiver, devolve -1. */
  
    if (tamanho_vetor == 0) return -1;
    if (valor_desejado == vetor[tamanho_vetor - 1]) return tamanho_vetor - 1;
  
    return busca_recursiva(valor_desejado, vetor, tamanho_vetor - 1);
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int indice = busca_recursiva(7, vetor, 10);
  
    printf("%d\n", indice);

    return 0;
}
