#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){

    setlocale(LC_ALL, "Portuguese");

    int i, control=0;

    for(i=1;control<3;i++){
        if((i%3) == 0){
            control++;
            printf("\n%d", i);
        }
        i++;
    }

}
