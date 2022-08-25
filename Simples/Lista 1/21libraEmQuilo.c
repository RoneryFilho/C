#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //libras em quilos
    setlocale(LC_ALL, "Portuguese");

    float lb;

    printf("Peso em libras: ");
    scanf("%f", &lb);

    printf("Peso em quilos: %.2f", lb * 0.454);

}
