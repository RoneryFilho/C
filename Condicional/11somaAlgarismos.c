#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //soma dos algarismos SE  maior que zero
    setlocale(LC_ALL, "Portuguese");

    int num,numM,numC,numD,numU;

    printf("Digite um numero inteiro mair que zero: ");
    scanf("%d", &num);

    if(num > 0){

        numM = num / 1000;
        numC = num % 1000 / 100;
        numD = num % 1000 % 100 / 10;
        numU = num % 1000 % 100 % 10;

        printf("Soma dos algarismos: %d", numM + numC + numD + numU);

    }else{
        printf("NÚMERO INVÁLIDO!");
    }

}
