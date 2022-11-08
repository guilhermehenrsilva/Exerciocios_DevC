#include <stdio.h>
int main(){
	float n1,n2,media;
	printf("Informe as duas notas:");
	scanf("%f%f",&n1,&n2);
	media = (n1+n2)/2;
	if(media>=6)
		printf("Aprovado com media:%.2f",media);
	else if(media >=4 && media <6)
		   printf("Recuperacao,media:%.2f",media);
		 else
			printf("Reprovado,media:%.2f",media);
		   
	return 0;		
}
