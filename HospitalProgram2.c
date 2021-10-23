#include <stdio.h>
#include <stdlib.h>
int main(){
	char nome[40];
	int idade, bemAlimentado, resfriado;
	float peso;

	prinf("Seu nome: ");
	scanf("%s", &nome);
	
	printf("Sua idade: ");
	scanf("%d", &idade);
	
	prinf("Seu peso: ");
	scanf("%f", &peso);
	
	printf("Esta bem alimentado? <1-SIM/0-NÃO>");
	scanf("%d", &bemAlimentado);
	
	printf("Esta resfriado? <1-SIM/0-NÃO>");
	scanf("%d", &resfriado);
	
	if(peso >= 50 && (idade >= 16 && idade <= 69) && bemAlimentado && !resfriado){
		printf("%s está apto", nome);
	}else {
		printf("%s não está apto", nome);
	}
	
	return 0;
}
