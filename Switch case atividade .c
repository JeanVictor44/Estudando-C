#include <stdio.h>

int main(){
	char codeFood;
	
	printf("Tabela de comidas\n\n");
	printf(" P - pizza\n L - Lasanha\n C - Churrasco\n B - Batata Frita\n R - Repolho\n");
	scanf("%c",&codeFood);
	
	switch(codeFood){
		case 'P':
			printf("I love Pizza");
			break;
		case 'L':
			printf("I am in love with Lasanha");
			break;
		case 'C':
			printf("I am crazy for churrasco ");
			break;
		case 'B':
			printf("I like to french fries with Ketchup");
			break;
		case 'R':
			printf("I hate repolho");
			break;
		default:
			printf("Incorrect code");
	}
}
