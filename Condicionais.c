#include <stdio.h>
#include <locale.h> // Biblioteca de regionalização, indica em que local estou

int main() {
	setlocale(LC_ALL, "Portuguese"); // Função para apontar o local, desta forma o terminal irá suportar acentuações da lingua portuguesa
	int n1;
	int n2;
	printf("Compare dois números\n\n");
	int continuar = 1;

	while(continuar) {
		printf("Digite o 1° número: ");
		scanf("%d", &n1);
		printf("Digite o 2° número: ");
		scanf("%d", &n2);

		if(n1 > n2) {
			printf("%d é maior que %d", n1, n2);
		} else if(n1 < n2) {
			printf("%d é menor que %d", n1, n2);
		} else {
			printf("%d é igual a %d",n1,n2);
		}

		do {
			printf("\n\nDeseja continuar? \n\n Sim - 1 \n Não - 0\n");
			scanf("%d", &continuar);
		} while(continuar != 1 && continuar != 0);

	}

	return 0;
}
