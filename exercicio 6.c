#include <stdio.h>

int main() {
	int number;
	printf("Digite um numero: ");
	scanf("%d", &number);

	printf("\n\nAntecessor: %d\nSucessor: %d", number-1, number+1);
	return 0;
}
