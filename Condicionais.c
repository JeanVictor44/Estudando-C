#include <stdio.h>
#include <locale.h> // Biblioteca de regionaliza��o, indica em que local estou

int main() {
	setlocale(LC_ALL, "Portuguese"); // Fun��o para apontar o local, desta forma o terminal ir� suportar acentua��es da lingua portuguesa
	int n1;
	int n2;
	printf("Compare dois n�meros\n\n");
	int continuar = 1;

	while(continuar) {
		printf("Digite o 1� n�mero: ");
		scanf("%d", &n1);
		printf("Digite o 2� n�mero: ");
		scanf("%d", &n2);

		if(n1 > n2) {
			printf("%d � maior que %d", n1, n2);
		} else if(n1 < n2) {
			printf("%d � menor que %d", n1, n2);
		} else {
			printf("%d � igual a %d",n1,n2);
		}

		do {
			printf("\n\nDeseja continuar? \n\n Sim - 1 \n N�o - 0\n");
			scanf("%d", &continuar);
		} while(continuar != 1 && continuar != 0);

	}

	return 0;
}
