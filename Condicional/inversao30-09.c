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

    for(int i=0; i<=2; i++){
        if((numC % 2) !=0){
            numC = 2;
        }else{
            numC = 5;
        }

        if((numD % 2) !=0){
            numD = 2;
        }else{
            numD = 5;
        }

        if((numU %2) !=0){
            numU = 2;
        }else{
            numU = 5;
        }
    }

    printf("%d", (numC*100)+(numD*10)+numU);
}
