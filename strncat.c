#include <stdio.h>
#include <string.h>
//strncat concatena de uma vari�vel a outra, por�m especifica o tamanho a ser concatenado

int main(){
	char book[20] = "Livro: ";
	char nameBook[15] = "Hary Potterrrrr";
	
	strncat(book, nameBook,11);// concatena book com a quantidade espec�ficada do nameBook
	printf("%s",book);
	
	return 0;
}
