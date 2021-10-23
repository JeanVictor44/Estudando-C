#include <stdio.h>

int main(){
	char operador;
	double num1,num2;
	
	
	printf("Digite um numero: ");
	scanf("%lf",&num1); 
	
	printf("Digite outro numero: ");
	scanf("%lf",&num2);
	
	printf("Digite um operador: ");
	scanf(" %c",&operador);
	
	
	switch(operador){
		case '+':
			printf("Resultado: %.2lf",num1+num2);
			break;
		case '-':
			printf("Resultado: %.2lf", num1-num2);
			break;
		case '/':
			printf("Resultado: %.2lf",num1/num2);
			break;
		case '*':
			printf("Resultado: %.2lf",num1*num2);
			break;
		default:
			printf("Digite um operador valido da proxima vez");
			
	}
	return 0;
}
