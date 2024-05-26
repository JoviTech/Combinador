#include <stdio.h>

#define MAX_PALAVRA 100 // Tamanho máximo de uma palavra
#define MAX_LINHAS 100 // Número máximo de linhas na matriz

int main() {
    int numero_de_linhas;
    
    printf("Digite o numero de casos: ");
    scanf("%d", &numero_de_linhas);

    // Declaração da matriz de strings
    char matriz[MAX_LINHAS][2][MAX_PALAVRA];

    // Lendo os pares de palavras da entrada
    for (int i = 0; i < numero_de_linhas; i++) {
        printf("Digite duas palavras para o caso %d: ", i + 1);
        scanf("%s %s", matriz[i][0], matriz[i][1]);
    }

    // Exemplo de acesso aos elementos da matriz
    for (int i = 0; i < numero_de_linhas; i++) {
        printf("Para o caso %d, a primeira palavra eh: %s e a segunda palavra eh: %s\n", i + 1, matriz[i][0], matriz[i][1]);
    }

    return 0;
}
