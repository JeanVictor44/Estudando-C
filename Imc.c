#include <stdio.h>
#include <math.h>

int main(){
	float weight;
	float height;
	float imc;
	
	printf("Digite seu peso(Kg): ");
	scanf("%f", &weight);
	
	printf("Digite sua altura(m): ");
	scanf("%f", &height);
	printf("\n\n");
	
	imc = weight / pow(height, 2);
	
	printf("Imc: %f  ", imc);
	if(imc < 18.5){
		printf("Abaixo do peso");
	}else if(imc >= 18.6 && imc <= 24.9){
		printf("Peso ideal(Parabens)");
	}else if(imc >=25 && imc <= 29.9){
		printf("Levemente acima do peso");
	}else if(imc >= 30 && imc <= 34.9){
		printf("Obesidade grau I");
	}else if(imc >= 35 && imc <= 39.9){
		printf("Obesidade grau II");
	}else {
		printf("Obesidade grau III (Morbida)");
	}
	
}
