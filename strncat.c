#include <stdio.h>
#include <string.h>
//strncat concatena de uma variável a outra, porém especifica o tamanho a ser concatenado

int main(){
	char book[20] = "Livro: ";
	char nameBook[15] = "Hary Potterrrrr";
	
	strncat(book, nameBook,11);// concatena book com a quantidade específicada do nameBook
	printf("%s",book);
	
	return 0;
}
