#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Soma o sucessor do triplo do numero digitado com o antecessor do dobro do numero digitado
    setlocale(LC_ALL, "Portuguese");

    int num, numD,numT;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    numD = num * 2;
    numT = num * 3;

    printf("Soma do sucessor do triplo com o antecessor do dobro do numero digitado: %d", (numT + 1) + (numD - 1));

}
