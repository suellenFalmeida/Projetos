#include <stdio.h>

int main(){

    int Segundos;

    //Recolha do tempo
    printf("Insira o tempo em segundos: ");
    scanf("%d", &Segundos);

    //Conversão em horas, minutos e segundos
    int Horas = Segundos/3600;
    int minutosRestantes = (Segundos % 3600) / 60;
    int segundosRestantes = Segundos % 60;

    printf("%d Segundos(s) é: %d Hora(s), %d minuto(s) e %d segundo(s)\n", Segundos, Horas, minutosRestantes, segundosRestantes);

    return 0;

}
