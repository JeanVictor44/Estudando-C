#include <stdio.h>

int main() {
	int number;
	printf("Digite um numero: ");
	scanf("%d",&number);
	if(number < 500){
		printf("O numero %d eh menor que 500",number);
	}else if(number > 500){
		printf("O numero %d eh maior que 500",number);
	}else {
		printf("O numero %d eh igual a 500",number);
	}
	return 0;
}
