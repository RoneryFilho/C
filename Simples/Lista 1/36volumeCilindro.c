#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //calcula o volume de um cilindro
    setlocale(LC_ALL, "Portuguese");

    float alt, raio, pi = 3.141592;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &alt);

    printf("Digite o raio do cilindro:");
    scanf("%f", &raio);

    printf("Volume do cilindro: %.4f", pi * pow(raio,2) * alt);

}
