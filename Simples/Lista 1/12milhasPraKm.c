#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Convertendo milhas para km
    setlocale(LC_ALL, "Portuguese");
    float mil;

    printf("Digite a dist�ncia em milhas: ");
    scanf("%f", &mil);

    printf("Dist�ncia em KM: %.1f", mil * 1.61);

}
