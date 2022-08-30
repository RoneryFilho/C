#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Imprime um numero inteiro de 1000 a 9999 um numero por linha
    setlocale(LC_ALL, "Portuguese");

    int num, numM, numC, numD, numU;

    printf("Digite um numero inteiro de 1000 à 9999: ");
    scanf("%d", &num);

    numM = num / 1000;
    numC = num % 1000 / 100;
    numD = num % 1000 % 100 / 10;
    numU = num % 1000 % 100 % 10;

    printf("%d \n", numM);
    printf("%d \n", numC);
    printf("%d \n", numD);
    printf("%d \n", numU);

}
