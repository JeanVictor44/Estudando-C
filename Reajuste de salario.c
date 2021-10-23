// Criar um programa que armazene o salário atual do funcionário
#include <stdio.h>

int main(){
	int jobCode; 
	double currentWage, newWage; 
	
	printf("Your job code: ");
	scanf("%d",&jobCode);
	if(jobCode < 1 || jobCode > 4){
		printf("\nType a valid job code next time ");
		return 0;	
	}
	
	printf("Current wage: ");
	scanf("%lf",&currentWage);
	
	if(jobCode == 1){
		printf("6 percent for IT");
		newWage = currentWage + (currentWage * 0.06);
	}else if(jobCode == 2){
		printf("7 percent Readjustment for Marketing");
		newWage = currentWage + (currentWage * 0.07);
	}else if(jobCode == 3){
		printf("3 percent Readjustment for Sales ");
		newWage = currentWage + (currentWage * 0.03);
	}else{
		printf("13 percent Readjustment for Administrative");
		newWage = currentWage + (currentWage * 0.13);
	}
	printf("\n\nYou new Wage is %.2lf", newWage);
	
	return 0;
}
