#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //quilos para libras
    setlocale(LC_ALL, "Portuguese");

    float quilo;

    printf("Digite um peso em quilos: ");
    scanf("%f", &quilo);

    printf("Peso em libras: %.2f", quilo/0.454);

}
