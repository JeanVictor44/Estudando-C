#include <stdio.h>
#include <string.h> //Lidar com strings
#include <conio.h> //Utilizar fun��o getch

//string de destino -> string que recebe a c�pia
//string de origem -> a string

//strcpy -> strcpy(stringDeDestino, stringDeOrigem) -> realiza a c�pia do conte�do de uma vari�vel para outra

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
