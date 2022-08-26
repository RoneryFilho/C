#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Calculaa  a area de um quadrado
    setlocale(LC_ALL, "Portuguese");

    float lado;

    printf("Digite o a medida de um lado de um quadrado: ");
    scanf("%f", &lado);

    printf("Área do quadrado: %.2f", lado * lado);

}
