#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //litros em metros cubicos
    setlocale(LC_ALL, "Portuguese");

    float litros;

    printf("Digite o volume em litros: ");
    scanf("%f", &litros);

    printf("Volume em metros cubicos: %.2f", litros / 1000);


}
