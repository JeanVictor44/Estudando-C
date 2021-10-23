#include <stdio.h>
#include <string.h>

//strtok dividi a string em partes a partir do separador
int main(){
	char texto[5] = "J e a n";
	char *string;
	
	string = strtok(texto," ");
	printf(string);
		
}
