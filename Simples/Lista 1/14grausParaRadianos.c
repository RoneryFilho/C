#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Convertendo graus em radianos
    float grau;

    printf("Digite um angulo: ");
    scanf("%f", &grau);

    printf("Graus em radianos: %.2f", grau * M_PI/180);

}
