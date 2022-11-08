#include <stdio.h>
int main (){
	
	int n, fat=1,cont;
	scanf ("%d",&n);
	for (cont=1;cont<=n;cont++)
		fat=fat*cont;		
		printf ("%d\n",fat);
		return 0;
	
}
