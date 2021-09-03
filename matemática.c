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
		A divisão de 2 inteiros sempre gera um inteiro
		Para termos uma divisão mais precisa ao menos um deles deve ser float
		portanto faremos uma operação de casting(pt: elenco)
		que fará a conversão de um deles para float
	*/
	const float DIV = (float) n1 / n2; //aLteração aqui, explicação acima
	
	printf(" Soma: %d\n Subtracao: %d\n Multiplicacao: %d\n Divisao: %.2f", SUM, SUBTRACT, MULTIPLICATION, DIV);
	return 0;
}
