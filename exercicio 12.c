#include <stdio.h>

int main() {
	float money, readjustment;
	
	printf("Digite o saldo da sua conta poupanca: ");
	scanf("%f", &money);
	
	readjustment = money * 0.98; // Tira 2% 
	printf("\nSaldo Anterior: %.2f\nSaldo atual: %.2f",money,readjustment);
	
	return 0;
}
