#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Celsius para Kelvin
    float cel;

    printf("Digite temperatura em Celsius: ");
    scanf("%f", &cel);

    if(cel >= -273.15){

        printf("Temperatura em Kelvin: %.2f", cel + 273.15);

    }
    else{

        printf("NÃO EXISTE TEMPERATURA MENOR QUE -273,15 CELSIUS");

    }

}
