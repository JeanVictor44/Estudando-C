#include <stdio.h>

int main(){
	char name[30];
	int flu, fed, age; // gripado, alimentado, idade
	float weight;
	
	printf("Complete name: ");
	gets(name);
	
	printf("Age: ");
	scanf("%d", &age);
	
	printf("Weight: ");
	scanf("%f", &weight);
	
	printf("0-Sick\n1-Well\n");
	scanf("%d", &flu);
	
	printf("0-Hungry\n1-Fed\n");
	scanf("%d", &fed);
	
	int minimumAge = age > 16 && age < 69;
	int minimumWeight = weight >= 50; 
	printf();
	
	//Se ele tiver a idade mínima e o peso mínimo e estiver alimentado e bem(sem resfriado) ele pode doar sangue 
	if(minimumAge && minimumWeight && flu && fed) {
		printf("\n%s you can donate blood\nCONGRATULATIONS",name);
	}else {
		printf("\n%s you can't donate blood\nI'M REALLY SORY",name);
	}
}
