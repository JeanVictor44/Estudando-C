#include <stdio.h>

int main(){
	int destiny;
	int isRoundTrip; // viagem de ida e volta?
	
	printf("Choose your Destiny\n\n1 - Regiao Norte\n2 - Regiao Nordeste\n3 - Regiao Centro-Oeste\n4 - Regiao Sul\n");
	scanf("%d", &destiny);
	
	printf("\n1 - Round Trip\n0 - No Round Trip\n");
	scanf("%d", &isRoundTrip);
	
	if(destiny == 1){
		if(isRoundTrip){
			printf("Ticket price to Norte with Round trip: $900");
		}else {
			printf("Ticket price to Norte without Round trip: $500");
		}
		
	}else if(destiny == 2){
		if(isRoundTrip){
			printf("Ticket price to Nordeste with Round trip: $650");
		}else {
			printf("Ticket price to Nordeste without Round trip: $350");
		}
	
	}else if(destiny == 3){
		if(isRoundTrip){
			printf("Ticket price to Centro-Oeste with Round trip: $600");
		}else {
			printf("Ticket price to Centro-Oeste without Round trip: $350");
		}
	
	}else {
		if(isRoundTrip){
			printf("Ticket price to Sul with Round trip: $550");

		}else {
			printf("Ticket price to Sul without Round trip: $300");

		}
	}
	
	return 0;
}
