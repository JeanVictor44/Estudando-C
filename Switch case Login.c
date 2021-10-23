#include <stdio.h>

int main(){
	int IdCorrect = 444;
	int passwordCorrect = 1234;
	int id;
	int password;
	
	printf("Digite seu ID: \n");
	scanf("%d",&id);
	
	switch(id){
		case idCorrect:
			printf("Digite sua senha:\n");	
			scanf("%d",&password);
			switch(password){
				case passwordCorrect:
					printf("Logado com sucesso");
					break;
				default:
					printf("Senha incorreta");
					break;
			}
		
		break;
		default:
			printf("ID incorreto");	
			
	}
	
}
