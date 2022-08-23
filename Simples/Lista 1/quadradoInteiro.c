#include <stdio.h>
#include <math.h>

int main(void){

    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    printf("Quadrado do numero: %.2f", pow(num,2));

}
