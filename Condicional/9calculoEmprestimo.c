#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(void){
    //calcula se permite ou n�o um emprestimo baseado no sal�rio informado, concede apenas se o emprestimo for 20% ou menos que o salario
    setlocale(LC_ALL, "Portuguese");

    float sal, emp;

    printf("Digite seu sal�rio: ");
    scanf("%f", &sal);

    printf("Digite o valor que deseja de empr�stimo: ");
    scanf("%f", &emp);

    if(emp > (sal * 0.2)){
        printf("Empr�stimo negado!");
    }else{
        printf("Empr�stimo aprovado!");
    }

}
