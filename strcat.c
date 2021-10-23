#include <stdio.h>
#include <string.h>

int main (){
	char nome[5] = "Jean";
	char sobrenome[10] = " Victor";
	int tamanho;
	strcat(nome,sobrenome);//concatena sobrenome com nome 
	tamanho = strlen(nome);
	
	printf("%d\n",tamanho);
	printf("%s",nome);
	return 0;
}
