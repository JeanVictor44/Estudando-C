#include <stdio.h>

int main(void){
	int n1,n2;
	
	printf("Digite o n1: ");
	scanf("%d",&n1);
	
	printf("Digite o n2: ");
	scanf("%d",&n2);
	
	const int SUM = n1 + n2;
	const int SUBTRACT = n1 - n2;
	const int MULTIPLICATION = n1 * n2;
	
	/*
		A divis�o de 2 inteiros sempre gera um inteiro
		Para termos uma divis�o mais precisa ao menos um deles deve ser float
		portanto faremos uma opera��o de casting(pt: elenco)
		que far� a convers�o de um deles para float
	*/
	const float DIV = (float) n1 / n2; //aLtera��o aqui, explica��o acima
	
	printf(" Soma: %d\n Subtracao: %d\n Multiplicacao: %d\n Divisao: %.2f", SUM, SUBTRACT, MULTIPLICATION, DIV);
	return 0;
}
