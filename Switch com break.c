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
			/* Aqui o break � opcional uma vez que n�o
			   h� outros cases abaixo do default, j� que
			   ele funciona como um caso contr�rio dos cases anteriores
			*/
	}
	/* Explica��o: O break impede que os cases abaixo do que o usu�rio escolheu
				   sejam executados, saindo do switch assim que lido por uma thread(linha de execu��o).
	 */
	return 0;
}
