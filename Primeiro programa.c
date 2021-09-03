#include<stdio.h>
// compilar é tranformar o código em um arquivo executável

// incia a execução do programa(Obrigatório)
int main(void){
	// Hello world 
	int a = 6;
	printf("%d\n",a);
	printf("Hello World\n");
	printf("The World is very large and same time small\n");
	
	// Scanf
	char turma; //variável do tipo char armazena um único carcactere na memória
	printf("Informe a sua turma: ");
	//lendo char e enviando para o endereço de memória da variável conceito
	scanf("%c\n", &turma);
	printf("A turma %c é muito grande",turma);
		
	return 0; //indica o fim do programa
}
