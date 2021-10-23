#include<stdio.h>

int main(){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	if(num % 2 == 0){
		printf("%d eh Par",num);
	}else {
		printf("%d eh Impar",num);
	}
	return 0;
}
