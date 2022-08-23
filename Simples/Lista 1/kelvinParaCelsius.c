#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "Portuguese");
    float far;

    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f", &far);

    printf("Temperatura em Celsius: %.1f", 5.0*(far-32)/9);

}
