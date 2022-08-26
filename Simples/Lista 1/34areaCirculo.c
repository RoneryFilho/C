#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //calcula a area de um circulo
    setlocale(LC_ALL, "Portuguese");

    float raio, pi = 3.141592;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    printf("Area do circulo: %.2f", pi * pow(raio, 2));



}
