#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "Portuguese");

    int i;

    for(i=0;i<=100000;i+=1000){
        printf("%d\n", i);
    }
}
