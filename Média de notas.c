#include <stdio.h>

int main(void) {
	float firstNote,secondNote,average;

	printf("Nota 1: ");
	scanf("%f",&firstNote);

	printf("Nota 2: ");
	scanf("%f",&secondNote);

	average = (firstNote + secondNote)/2;

	if(average > 6) {
		printf("Aprovado com media %.2f",average);
	} else {
		printf("Reprovado com media %.2f",average);
	}

	return 0;
}
