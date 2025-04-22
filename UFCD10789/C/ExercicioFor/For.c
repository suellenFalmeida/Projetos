#include <stdio.h>

int main() {
    int numeros[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Numeros pares: ");
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
        }
    }

    printf("\nNumeros impares: ");
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 != 0) {
            printf("%d ", numeros[i]);
        }
    }

    printf("\n");
    return 0;
}
