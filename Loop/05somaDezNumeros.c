#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "Portuguese");

    int i,num, soma=0;

    for(i=0;i<=9;i++){
        scanf("%d", &num);
        soma+= num;
    }
    printf("%d", soma);
}
