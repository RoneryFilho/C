#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "Portuguese");

    int i, pares=0;

    for(i=1;pares<50;i++){
        if((i%2)==0){
            printf("%d\n", i);
            pares++;
        }
    }

}
