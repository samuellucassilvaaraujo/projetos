#include <stdio.h>

int main() {
    int vetor[10];
    int i;

    
    printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    
    printf("Números ímpares no vetor: ");
    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    return 0;
}