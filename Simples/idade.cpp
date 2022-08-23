#include <iostream>
#include <math.h>

int main(void){
	
	int idade;
	char nome[50];
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Nome: %s \n", nome);
	printf("Ano de nascimento: %d\n", 2022 - idade);	 
}
