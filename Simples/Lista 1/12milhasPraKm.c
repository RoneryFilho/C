#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Convertendo milhas para km
    setlocale(LC_ALL, "Portuguese");
    float mil;

    printf("Digite a distância em milhas: ");
    scanf("%f", &mil);

    printf("Distância em KM: %.1f", mil * 1.61);

}
