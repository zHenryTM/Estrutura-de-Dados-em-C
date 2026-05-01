#include <stdio.h>

int busca(int valor_desejado, int vetor[], int tamanho_vetor);

int busca(int valor_desejado, int vetor[], int tamanho_vetor) {
    /* Esta função verifica se um valor está no vetor.
     * Se estiver, devolve o índice onde o valor se encontra.
     * Se não estiver, devolve -1. */
     
     int indice = tamanho_vetor - 1;  // Índice máximo do vetor.
     while (indice >= 0) {
         if (vetor[indice] == valor_desejado) return indice;
         indice--;
     }
     return -1;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int indice = busca(5, vetor, 10);
  
    printf("%d\n", indice);
  
    return 0;
}
