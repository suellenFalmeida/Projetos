#include <stdio.h>

int main(){

    int num1 = 0, num2 = 0, num3 = 0;

    printf("Insira o Primeiro valor: ");
    scanf("%d", &num1);
    printf("\nInsira o Segundo valor: ");
    scanf("%d", &num2);
    printf("\nInsira o Terceiro valor: ");
    scanf("%d", &num3);

    printf("Ordem crescente: ");
    if (num1 <= num2 && num1 <= num3) {
        printf("%d ", num1);
        if (num2 <= num3) {
            printf("%d %d\n", num2, num3);
        } else {
            printf("%d %d\n", num3, num2);
        }
    } else if (num2 <= num1 && num2 <= num3) {
        printf("%d ", num2);
        if (num1 <= num3) {
            printf("%d %d\n", num1, num3);
        } else {
            printf("%d %d\n", num3, num1);
        }
    } else {
        printf("%d ", num3);
        if (num1 <= num2) {
            printf("%d %d\n", num1, num2);
        } else {
            printf("%d %d\n", num2, num1);
        }
    }

    printf("Ordem decrescente: ");
    if (num1 >= num2 && num1 >= num3) {
        printf("%d ", num1);
        if (num2 >= num3) {
            printf("%d %d\n", num2, num3);
        } else {
            printf("%d %d\n", num3, num2);
        }
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%d ", num2);
        if (num1 >= num3) {
            printf("%d %d\n", num1, num3);
        } else {
            printf("%d %d\n", num3, num1);
        }
    } else {
        printf("%d ", num3);
        if (num1 >= num2) {
            printf("%d %d\n", num1, num2);
        } else {
            printf("%d %d\n", num2, num1);
        }
    }

}
