#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Metros/segundo para Km/h
    setlocale(LC_ALL, "Portuguese");
    float ms;

    printf("Digite a velocidade em metros por segundo: ");
    scanf("%f", &ms);

    printf("Velocidade em Km/H: %.2f", ms * 3.6 );

}
