#include <locale.h>

int main(void){

    setlocale(LC_ALL, "Portuguese");

    int N, i, j, cont = 0;

    scanf("%d", &N);

    char string[N];

    scanf("%s", &string);

    for(i=0;i<N;i++){
        if(string[i] == 'a' && string[i+1] == 'a'){
            cont++;
        }
        if(i>1){
        if(string[i] == 'a' && string[i-1] == 'a'){
            cont++;
        }
        }
    }

    printf("%d", cont);
}
