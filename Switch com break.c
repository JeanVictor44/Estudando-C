#include <stdio.h>

int main() {
	int number;
	printf("Type a number from 1 to 3: ");
	scanf("%d", &number);


	switch(number) {
		case 1:
			printf("Case one");
			break;
		case 2:
			printf("Case two");
			break;
		case 3:
			printf("Case three");
			break;
		default:
			printf("Case invalid");
			/* Aqui o break é opcional uma vez que não
			   há outros cases abaixo do default, já que
			   ele funciona como um caso contrário dos cases anteriores
			*/
	}
	/* Explicação: O break impede que os cases abaixo do que o usuário escolheu
				   sejam executados, saindo do switch assim que lido por uma thread(linha de execução).
	 */
	return 0;
}
