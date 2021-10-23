#include <stdio.h>
#include <string.h> //Lidar com strings
#include <conio.h> //Utilizar função getch

//string de destino -> string que recebe a cópia
//string de origem -> a string

//strcpy -> strcpy(stringDeDestino, stringDeOrigem) -> realiza a cópia do conteúdo de uma variável para outra

int main(){
	char nome1[20] = "Jean";
	char nome2[20];
	
	printf("Nome: ");
	scanf("%s",&nome2);
	
	strcpy(nome1, nome2);
	printf("%s",nome1);
	
	getch();
	return 0;
}
