#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Convertendo radianos em graus
    float rad;

    printf("Digite um angulo: ");
    scanf("%f", &rad);

    printf("Graus em radianos: %.2f", rad * 180/M_PI);

}
