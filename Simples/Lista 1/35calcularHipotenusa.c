#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Calcula a hipotenusa
    setlocale(LC_ALL, "Portuguese");

    float catA, catB, hip;

    printf("Digite a medida do cateto A: ");
    scanf("%f", &catA);

    printf("Digite a medida do cateto B: ");
    scanf("%f", &catB);

    printf("Hipotenusa: %.2f", sqrt(pow(catA, 2) + pow(catB, 2)));


}
