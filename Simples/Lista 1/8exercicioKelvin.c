#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Kelvin para Celsius
    setlocale(LC_ALL, "Portuguese");
    float kelvin;

    printf("Digite uma temperatura em Kelvin: ");
    scanf("%f", &kelvin);

    if(kelvin >= 0 ){

        printf("Temperatura em Celsius: %.2f", kelvin - 273.15);
    }
    else{

        printf("NÃO É POSSIVEL TEMPERATURA ABAIXO DE 0 KELVIN");

    }

}
