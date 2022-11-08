#include <stdio.h>

int main (){
	int base,exp,pot=1,cont;
	printf ("Entre com a base e expoente: ");
	scanf("%d%d", &base,&exp);
	for (cont=1;cont<=exp;cont++)
		pot*=base; // pot = pot*base; (os dois jeitos estão corretos)
	printf("%d ^ %d = %d ", base , exp, pot);
	return 0;	
}//fim main 
