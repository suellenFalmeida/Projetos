#include <stdio.h>

int main() {

    float nota1 = 0, nota2 = 0, nota3 = 0;
    float media = 0;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);

    printf("Digite a nota da terceira prova: ");
    scanf("%f", &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 3;

    if (media >= 6.0) {
        printf("MEDIA: %.2f - APROVADO\n", media);
    } else {
        printf("MEDIA: %.2f - REPROVADO\n", media);
    }

    return 0;
}
