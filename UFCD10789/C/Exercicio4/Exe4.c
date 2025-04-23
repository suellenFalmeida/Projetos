#include <stdio.h>

int main(){

    int saldoInicial = 0;
    int cheque = 0;
    int saldoFinal = 0;

    printf("Valor inicial da conta: ");
    scanf("%d", &saldoInicial);

    printf("Valor do cheque a ser descontado: ");
    scanf("%d", &cheque);

    saldoFinal = saldoInicial - cheque;

    if( cheque <= saldoInicial ){
        printf("\nCheque Descontado. Saldo atual da conta: %d", saldoFinal);
    } else {
        printf("\nO valor do cheque ainda nao pode ser descontado da conta.");
    };

}
