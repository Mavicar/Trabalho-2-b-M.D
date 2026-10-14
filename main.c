#include <stdio.h>

int main() {
    int linhas, i, j;
    unsigned long long valor;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);

    for (i = 0; i < linhas; i++) {
        valor = 1;

        for (j = 0; j <= i; j++) {
            printf("%4llu", valor);
            valor = valor * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
