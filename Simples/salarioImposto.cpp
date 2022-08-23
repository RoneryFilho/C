#include <iostream>
#include <math.h>

int main(void){
	
	float salario;
	
	printf("Digite seu salario: \n");
	scanf("%f", &salario);
	
	printf("Salario: %.2f \n", salario);
	printf("Imposto de renda: %.2f \n", salario * 0.05);
	printf("Salario Liquido: %.2f \n", salario - (salario * 0.05));
	
}
