#include <stdio.h>
#include <string.h>

int main(){
	int retorno; 
	
	/* 0 Iguais 
	   -1 string 1 < string 2
	   1 < string 1 > string 2
	   
	   Toma como base a tabela ASCII
	*/
	
	char string1[5] = "abc";
	char string2[5] = "abc";
	
	retorno = strcmp(string1, string2);
	
	printf("%d", retorno);
	if(!retorno){
		printf("Iguais");
	}

	return 0;
}
