#include<stdio.h>
int main(void){
    int N, cigNovo, i;
    while(1){
        scanf("%d%d", &N, &cigNovo);
        int bit=0, cigFum = N;
        if(N ==0 || cigNovo ==0){
            break;
        }
        while(1){
            bit += N;
            N = 0;
            N += bit/ cigNovo;
            cigFum +=N;
            bit -= N * cigNovo;
            if(bit < cigNovo && N == 0){
                break;
            }
        }
        printf("%d\n", cigFum);
    }
}
