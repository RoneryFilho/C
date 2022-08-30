#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //calcular ano de nascimento usando idade e ano atual
    setlocale(LC_ALL, "Portuguese");

    int idade, anoAtual;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Ano atual: ");
    scanf("%d", &anoAtual);

    printf("Ano de nascimento: %d", anoAtual - idade);

}
