#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char p1[40];
	char p2[40];
	int tamanho,i;
	printf("Entre com um palavra 1:");
	gets(p1);
	printf("Entre com um palavra 2:");
	gets(p2);
	printf("P1: %s P2: %s \n",p1,p2);
	//******strcpy ************************
	 printf("*** Copiando p2 para p1 ***\n");
	 strcpy(p1,p2);
	 puts(p1); puts(p2);  getch();
	 //******strcat ************************
	 printf("*** Concatenando as duas palavras em p1 ***\n");
     strcat(p1,p2);		  
	 puts(p1); getch();
	return 0 ;
}//fim main 
