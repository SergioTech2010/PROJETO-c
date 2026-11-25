#include <stdio.h>
int main(void) {
    char produtos[3] = { "Batatas Fritas", "Bolo Rei", "pao" };
    char pessoas[3] = { "Matheus", "Clara", "Arnaldo" };
    int quantidades[3][3];
    printf("=== Banco Alimentar de Natal ===\n\n");
    for (int i = 0; i < 3; i++) {
        printf("Quanto trouxe %s?\n", pessoas[i]);
        for (int j = 0; j < 3; j++) {
            printf("  %s: ", produtos[j]);
            scanf_s("%d", &quantidades[i][j]);
        }
        printf("\n");
    } 
    printf("\n=== Resumo ===\n");
    for (int i = 0; i < 3; i++) {
        printf("\n%s trouxe:\n", pessoas[i]);
        for (int j = 0; j < 3; j++) {
            if (quantidades[i][j] > 0) {
                printf("  - %d x %s\n", quantidades[i][j], produtos[j]);
            }
        }
    }
    printf("\n=== Totais ===\n");
    for (int j = 0; j < 3; j++) {
        int total = 0;
        for (int i = 0; i < 3; i++) {
            total += quantidades[i][j];
        }
        printf("%s: %d\n", produtos[j], total);
    }
    return 0;
}
