#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Lê segundos e imprime em horas, minutos e segundos
    setlocale(LC_ALL, "Portuguese");

    int segundos, horas, minutos, seg;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = segundos % 3600 / 60;
    seg = segundos % 3600 % 60;

    printf("%d", horas);
    printf(":%d", minutos);
    printf(":%d", seg);

}
