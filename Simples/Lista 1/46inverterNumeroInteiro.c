#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Inverter um numero inteir ode 100 a 999
    setlocale(LC_ALL, "Portuguese");

    int num, numC, numD, numU;

    printf("Digite um número inteiro de 100 a 999: ");
    scanf("%d", &num);

    numC = num / 100;
    numD = num % 100 / 10;
    numU = num % 100 % 10;

    //invertendo a ordem na qual os numeros sao mostrados
    printf("%d", numU);
    printf("%d", numD);
    printf("%d", numC);

}
