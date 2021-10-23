#include <stdio.h>

int main() {
	int number;
	
	printf("Type a number from 1 to 3: ");
	scanf("%d",&number);
	
	switch(number){
		case 1:
			printf("Case one\n");
		case 2:
			printf("Case two\n");
		case 3:
			printf("Case three\n");
		default:
			printf("Case invalid");
	}
	/*
		Explicação: O break funciona para finalizar o switch case 
					assim que as instruções do case são executadas.
					Na ausência dele além do case escolhido 
					pelo usuário ser executado os debaixo também serão.
					
	*/
	return 0;
}
