#include <stdio.h>

int main(){

    int num1, num2, num3;

    printf("Insira o Primeiro valor: ");
    scanf("%d", &num1);
    printf("\nInsira o Segundo valor: ");
    scanf("%d", &num2);
    printf("\nInsira o Terceiro valor: ");
    scanf("%d", &num3);

    int maior = num1;

    if (num2 > maior ){
        maior = num2;
    };

    if ( num3 > maior){
        maior = num3;
    };

    printf("O maior numero e: %d", maior);

}
