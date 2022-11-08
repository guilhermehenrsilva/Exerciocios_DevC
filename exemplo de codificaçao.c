#include <stdio.h>
#include <string.h>


int main (){
		char mensagem[50];
		int i,n;
			printf ("Mensagem:\n");
		gets(mensagem);
		n = strlen(mensagem);
		system("cls");
			for(i=0;i<n;i++){
			mensagem[i]+=2;
	}
				printf("mensagem codificada:");
					puts(mensagem);
			for(i=0;i<n;i++)
				mensagem[i]-=2 ;
					printf ("mensagem decodificada:");
						puts (mensagem);
			return 0; 
			
		}
