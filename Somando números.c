#include <stdio.h>

int main(void){
	int a;
	int b;
	int soma;
	
	printf("digite o primeiro inteiro: ");
	scanf("%d", &a);
	
	printf("digite o segundo inteiro: ");
	scanf("%d", &b);
	
	soma = a + b;
	printf("A soma entre %d e %d: %d",a,b,soma);

	return 0;
}
