#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //media aritmetica de 4 notas
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, n4;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    printf("Digite a quarta nota: ");
    scanf("%f", &n4);

    printf("Media aritmetica: %.2f", (n1+ n2 + n3 + n4)/4);

}
