#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //verifica se o numero inteiro
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    if(num % 2 == 0){

        printf("Par");

    }else{

        printf("Impar");

    }

}
