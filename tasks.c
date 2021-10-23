#include <stdio.h>

int main(){
	char task1[20], task2[20], task3[20];
	int hour1, hour2, hour3;
	
	printf("Escreva 3 tarefas e formatarei para você\n\n");
	
	printf("Digite a 1a tarefa: ");
	gets(task1);
	
	printf("Digite a 2a tarefa: ");
	gets(task2);
	
	printf("Digite o 3a tarefa: ");
	gets(task3);
	
	printf("\nDigite o horário da 1a tarefa: ");
	scanf("%d",&hour1);
	
	printf("Digite o horário da 2a tarefa: ");
	scanf("%d",&hour2);
	
	printf("Digite o horário da 3a tarefa: ");
	scanf("%d",&hour3);
	
	printf("\n\n%d - %s\n%d - %s\n%d - %s",hour1,task1,hour2,task2,hour3,task3);
}
