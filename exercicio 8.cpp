#include <stdio.h>

int main() {
	char name[40];
	char address[40];
	char numberPhone[15];
	 
	printf("Name: ");
	gets(name);
	
	printf("Address: ");
	gets(address);
	
	printf("Number phone: ");
	gets(numberPhone);
	
	printf("\n\n\nName: %s\nAddress: %s\nNumber phone: %s",name, address, numberPhone);
	
	
	return 0;
}
