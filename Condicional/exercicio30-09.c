#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Fahrenheit para celsius
    setlocale(LC_ALL, "Portuguese");
    float far;

    printf("Digite uma temperatura em Fahrenheit: ");
    scanf("%f", &far);

    printf("Temperatura em Celsius: %.1f\n", 5.0*(far-32)/9);

    if(far<35){
        printf("Frio");
    }else{
        printf("Esquentando");
    }

}
