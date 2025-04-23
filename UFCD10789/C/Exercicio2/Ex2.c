#include <stdio.h>

int main(){

    int num1 = 0, num2 = 0, num3 = 0;
    int maior = 0;
    int menor = 0;

    printf("Insira o Primeiro valor: ");
    scanf("%d", &num1);
    printf("\nInsira o Segundo valor: ");
    scanf("%d", &num2);
    printf("\nInsira o Terceiro valor: ");
    scanf("%d", &num3);

    maior = num1;

    if (num2 > maior ){
        maior = num2;
    };

    if ( num3 > maior){
        maior = num3;
    };

    menor = num1;

    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }

    printf("O maior numero e: %d\n", maior);
    printf("O menor numero e: %d\n", menor);

}
