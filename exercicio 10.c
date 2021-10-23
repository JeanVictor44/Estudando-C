#include <stdio.h>

int main() {
	float n1,n2;
	float soma, subtracao, divisao, multiplicacao;
	
	printf("Digite dois numeros: ");	
	scanf("%f%f",&n1, &n2);
	
	soma = n1 + n2;
	subtracao = n1 - n2;
	divisao = n1 / n2;
	multiplicacao = n1 * n2;
	
		
	printf("\n\nSoma: %.2f\n Subtracao: %.2f\nDivisao: %.2f\n Multiplicacao: %.2f",soma, subtracao, divisao, multiplicacao);
	return 0;
}
