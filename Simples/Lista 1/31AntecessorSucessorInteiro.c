#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Imprime o sucessor e o antecessor do numero inteiro digitado
    setlocale(LC_ALL, "Portuguese");


    int num;

    printf("Digite um inteiro: ");
    scanf("%d", &num);

    printf("Antecessor: %d \n", num - 1);
    printf("Sucessor: %d", num + 1);

}
