#include<stdio.h>
// compilar � tranformar o c�digo em um arquivo execut�vel

// incia a execu��o do programa(Obrigat�rio)
int main(void){
	// Hello world 
	int a = 6;
	printf("%d\n",a);
	printf("Hello World\n");
	printf("The World is very large and same time small\n");
	
	// Scanf
	char turma; //vari�vel do tipo char armazena um �nico carcactere na mem�ria
	printf("Informe a sua turma: ");
	//lendo char e enviando para o endere�o de mem�ria da vari�vel conceito
	scanf("%c\n", &turma);
	printf("A turma %c � muito grande",turma);
		
	return 0; //indica o fim do programa
}
