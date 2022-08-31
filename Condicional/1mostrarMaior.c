#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //imprime o maior numero
    setlocale(LC_ALL, "Portuguese");

    float n1, n2;

    printf("Digite um numero: ");
    scanf("%f", &n1);

    printf("Digite outro numero: ");
    scanf("%f", &n2);

    if(n1 > n2){

        printf("Maior número: %.2f", n1);

    }else{

        printf("Maior número: %.2f", n2);

    }


}
