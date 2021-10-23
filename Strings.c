#include <stdio.h>

int main(){
	char name[30];
	printf("Digite seu primeiro nome: ");
	gets(name);
	
	printf("Seja bem vindo %s",&name);
	return 0;
}
