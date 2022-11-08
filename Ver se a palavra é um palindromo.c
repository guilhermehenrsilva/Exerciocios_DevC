#include <stdio.h>
#include <string.h>

int main (){
	char p1[50], p2[50];
	int tamanho, i ;
	printf("Entre com a palavra:");
	gets(p1);
	tamanho = strlen(p1);
	for (i=0;i<tamanho;i++){
		p2[tamanho-1-i] = p1[i];
	}//fim for
	p2[tamanho]='\0';
	printf("String original \n");
	puts (p1);
	printf("String invetida  \n");
	puts (p2);
	return 0 ;a
	
}
