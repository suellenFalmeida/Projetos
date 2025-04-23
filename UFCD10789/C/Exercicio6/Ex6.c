#include <stdio.h>

int main(){

    char nomeCliente[50];
    float compra = 0, desconto = 0, valorFinal = 0;
    int porcentagem = 0;

    printf("Nome do cliente: ");
    scanf("%s", nomeCliente);

    printf("Insira o valor da compra efetuada: ");
    scanf("%f", &compra);

    if (compra <= 200.00) {
        porcentagem = 10;
    } else if (compra <= 500.00) {
        porcentagem = 15;
    } else {
        porcentagem = 20;
    }

    desconto = (porcentagem / 100.0) * compra;
    valorFinal = compra - desconto;

    printf("\nNome do cliente: %s\n", nomeCliente);
    printf("Valor da compra: %.2f euros\n", compra);
    printf("Percentual de desconto: %d%%\n", porcentagem);
    printf("Valor do desconto: %.2f euros\n", desconto);
    printf("Valor total a pagar: %.2f euros\n", valorFinal);

}
