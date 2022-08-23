#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    // Km/h para metro/segundo
    setlocale(LC_ALL,"Portuguese");
    float km;

    printf("Digite uma velocidade em Km/h: ");
    scanf("%f", &km);

    printf("Velocidade em m/s: %.2f", km/3.6);

}
