#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Converte letra min�scula em mai�scula
    setlocale(LC_ALL, "Portuguese");

    char letra;

    printf("Letra min�scula: ");
    scanf("%c", &letra);

    printf("Letra mai�scula: %c", letra+32);
}
