#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //centimetros para polegadas
    setlocale(LC_ALL, "Portuguese");
    float cm;

    printf("Digite uma medida em centímetros: ");
    scanf("%f", &cm);

    printf("Medida em polegadas: %.2f", cm/2.54);

}
