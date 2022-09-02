#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //Calcula a media ponderada de 3 provas
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &n1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &n2);

    printf("Digite a nota da terceira prova: ");
    scanf("%f", &n3);

    printf("Média ponderada: %.1f", (n1+n2+(n3*2))/(4) );

}
