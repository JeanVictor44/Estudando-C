#include <stdio.h>

int main() {
	int n1, n2;
	int subtracao;

	printf("Digite dois inteiros: ");
	scanf("%d%d", &n1, &n2);
	subtracao = n1-n2;
	
	printf("%d - %d = %d",n1, n2, subtracao);
	return 0;
}
