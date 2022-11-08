#include <stdio.h>
#include <string.h>


int main (){
		char mensagem[50];
		int i,n;
			printf ("Mensagem codificada:\n");
		gets(mensagem);
		n = strlen(mensagem);
			printf("Mensagem decodificada:\n");
		for(i=0;i<n;i++){
			if (mensagem[i]!='p')
				printf ("%c", mensagem[i]);
			else if (mensagem[i-1]=='p'&& mensagem [i+1]== 'p')
			  	printf ("%c", mensagem[i]);	
		}	//fim for
		
		return 0;
}
