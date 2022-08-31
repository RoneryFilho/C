#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    //mostra a media de 2 notas SE ambas forem de 0 a 10
    setlocale(LC_ALL, "Portuguese");

    float n1, n2;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    if((n1 >=0)&&(n1 <=10)&&(n2 >=0)&&(n2 <=10)){
        printf("Media: %.2f",(n1+n2)/2);
    }else{
        printf("UMA OU MAIS NOTAS INVÁLIDAS");
    }
}
