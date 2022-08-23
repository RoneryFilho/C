#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Convertendo km para milhas
    setlocale(LC_ALL, "Portuguese");
    float km;

    printf("Digite a distância em milhas: ");
    scanf("%f", &km);

    printf("Distância em KM: %.1f", km / 1.61);

}
