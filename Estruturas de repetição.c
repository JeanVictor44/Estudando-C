#include <stdio.h>
#include <string.h>

int main(){
	float contador = 0;
	float nota;
	float media;
	
	int i;
	
	for(i = 1; i <= 3; i++){
		
		printf("Digite a nota %d: ",i);
		scanf("%f",&nota);
		
		contador += nota;
	}
	media = contador / (i -1);
	printf("Media: %f",media);
	
	return 0;
}
