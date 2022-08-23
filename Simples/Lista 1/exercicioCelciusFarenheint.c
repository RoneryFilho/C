#include <stdio.h>
#include <math.h>

int main(void){

    float cel;

    printf("Digite a temperatura atual em Celsius: ");
    scanf("%f", &cel);

    printf("Temperatura em Fahrenheit: %.1f", cel * (9.0/5.0) + 32.0 );

}
