#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Converte letra minúscula em maiúscula
    setlocale(LC_ALL, "Portuguese");

    char letra;

    printf("Letra minúscula: ");
    scanf("%c", &letra);

    printf("Letra maiúscula: %c", letra+32);
}
