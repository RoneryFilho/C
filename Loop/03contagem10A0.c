#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "Portuguese");

    int i = 10;

    while(i>=0){
        printf("%d\n", i);
        i--;
    }
    printf("FIM");
}
