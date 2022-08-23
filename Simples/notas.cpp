#include <iostream>

int main(void){
	
	float nota1, nota2, notaFinal;
	
	printf("Digite a primeira nota: \n");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: \n");
	scanf("%f", &nota2);
	
	notaFinal = nota1 * 0.7 + nota2 * 0.3;
	
	printf("Nota final: %.2f \n", notaFinal);
}
