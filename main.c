#include <stdio.h>

int main() {
    
    float matriz[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
   
    
    printf("\nMatriz informada:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
   
    
    float soma_impares = 0;
    for (int i = 1; i < 4; i += 2) {
        for (int j = 0; j < 4; j++) {
            soma_impares += matriz[j][i];
        }
    }
    printf("\nSoma dos elementos das colunas impares: %.2f\n", soma_impares);
   
    
    float media_pares = 0;
    int qtd_pares = 0;
    for (int i = 0; i < 4; i += 2) {
        for (int j = 0; j < 4; j++) {
            media_pares += matriz[j][i];
            qtd_pares++;
        }
    }
    media_pares /= qtd_pares;
    printf("\nMedia aritmetica dos elementos das colunas pares: %.2f\n", media_pares);
   
    return 0;
}