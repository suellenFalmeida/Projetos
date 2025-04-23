#include <stdio.h>

int main(){

    int Segundos = 0;
    int Horas = 0;
    int minutosRestantes = 0;
    int segundosRestantes = 0;

    printf("Insira o tempo em segundos: ");
    scanf("%d", &Segundos);

    Horas = Segundos/3600;
    minutosRestantes = (Segundos % 3600) / 60;
    segundosRestantes = Segundos % 60;

    printf("%d Segundos(s) é: %d Hora(s), %d minuto(s) e %d segundo(s)\n", Segundos, Horas, minutosRestantes, segundosRestantes);

    return 0;

}
