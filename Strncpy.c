#include <stdio.h>
#include <string.h>

/*strncpy -> realiza a cópia do conteúdo de uma variável a outra, 
			 mas deve ser especificado o tamanho a ser copiado
*/

int main(){
	char username[20];
	char firstLetter[2];
	
	printf("Digite seu nome: ");
	scanf("%s",&username);
	
	strncpy(firstLetter, username,1);
	printf("%s",firstLetter);
	
	char nome[4] = "jean";
	nome[5] = '\0';
	
	printf("%s",nome);
	return 0;
}
