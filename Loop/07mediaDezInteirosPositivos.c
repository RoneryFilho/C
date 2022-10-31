#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "Portuguese");

    int i, posi=0, num;
    float media=0;

    for(i=0;i<=9;i++){
        scanf("%d", &num);
        if(num>0){
            posi++;
            media+=num;
        }
        num = 0;
    }
    printf("Media: %.2f", media/posi);
}
