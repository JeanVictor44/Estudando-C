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
		Explica��o: O break funciona para finalizar o switch case 
					assim que as instru��es do case s�o executadas.
					Na aus�ncia dele al�m do case escolhido 
					pelo usu�rio ser executado os debaixo tamb�m ser�o.
					
	*/
	return 0;
}
