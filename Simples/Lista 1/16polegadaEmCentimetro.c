#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //polegada para centimetros
    setlocale(LC_ALL, "Portuguese");
    float pol;

    printf("Digite um comprimento em polegadas: ");
    scanf("%f", &pol);

    printf("Valor em centímetros: %.2f", pol * 2.54);

}
