#include <stdio.h>

int main(){

    int Segundos;

    //Recolha do tempo
    printf("Insira o tempo em segundos: ");
    scanf("%d", &Segundos);

    //Conversão em minutos
    float Minutos = (float) Segundos/60;

    printf("%d segundo(s) em minutos é: %.2f minuto(s).\n", Segundos, Minutos);

    //Conversão em horas
    float Horas = Minutos/60;

    printf("%d Segundos(s) em Horas é: %.4f Hora(s).", Segundos, Horas);

    return 0;

}
