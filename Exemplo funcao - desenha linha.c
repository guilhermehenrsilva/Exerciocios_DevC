#include <stdio.h>
void desenhalinha(int);

int main (){
	int tamanho;
	while(1){
	printf ("Entre com o tamanho da linha");
	scanf ("%d", &tamanho);
	desenhalinha (tamanho);
	}
	return 0;
}
void desenhalinha(int n){
	int cont;
	for(cont=1;cont<=n;cont++)
		printf ("_");
	printf("\n");
}//fim funcao desenha 
