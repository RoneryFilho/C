#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //le a altura de um degrau e a altura que voce quer chegar, e calcula a quantidade de degraus necessaria
    setlocale(LC_ALL, "Portuguese");

    float alt, quant;

    printf("Altura do degrau em cm: ");
    scanf("%f", &alt);

    printf("Altura que quer chegar, em cm: ");
    scanf("%f",&quant);

    printf("Quantidade de degaurs: %.2f", quant / alt);
}
