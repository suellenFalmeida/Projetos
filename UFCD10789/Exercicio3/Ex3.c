#include <stdio.h>

int main(){

    int num1, num2;

    printf("Insira o Primeiro valor: ");
    scanf("%d", &num1);
    printf("\nInsira o Segundo valor: ");
    scanf("%d", &num2);

    int maior = num1;

    if (num2 > maior ){
        maior = num2;
    };

    int menor = num1;

    if (num2 < menor ){
        menor = num2;
    };

    printf("Leitura Crescente: %d, %d", menor, maior);
    printf("\nLeitura Decrescente: %d, %d", maior, menor);

}
