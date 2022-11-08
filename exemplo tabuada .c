#include <stdio.h>

int main (){
	int n1, soma , cont;
	//printf ("Digite o numero para a tabuada: ");
	scanf ("%d", &n1);
	for (cont=1;cont<=10;cont++){
		soma=n1*cont;		 
	printf ("%d x %d = %d\n", cont , n1 , soma);}
	return 0 ;
}

