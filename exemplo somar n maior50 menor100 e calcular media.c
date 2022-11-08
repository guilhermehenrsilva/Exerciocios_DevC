#include <stdio.h>

int main(){
	int num, cont=0;
	float soma=0, media;
	printf("Entre com um numero");
	scanf("%d",&num);
	if (num>=50 &&num<=100){
		cont++; // contando
		soma+=num; // soma = soma+num;
	}// fim se (if); 
    while(num!=0){
    media =soma/cont;
    printf ("Contador do intevalo:%d\n",cont);
    printf ("media dos valores: %.2f", media);
}
	return 0 ;
}
