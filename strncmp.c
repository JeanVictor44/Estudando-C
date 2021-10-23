#include <stdio.h>
#include <string.h>

//strncmp compara duas strings 

int main(){
	int retorno;
	char string1[5] = "Hell    o";
	char string2[10] = "Hell       oo";
	
	retorno = strncmp(string1,string2,4);// recorta a string1 em 4 caracteres e a string2 em 4 caracteres
	printf("%d", retorno);
	
	return 0;
}
