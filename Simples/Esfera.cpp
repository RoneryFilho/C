#include <iostream>
#include <math.h>

int main(void){
	
	float raio, volume;
	
	scanf("%f", &raio);
	
	volume = ((4 * M_PI * (pow(raio, 2))/3));
	
	printf("Volume: %.2f \n", volume);
	printf("%f", raio);
}
