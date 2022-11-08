#include <stdio.h>
int main (){
		int n,cont,vezes,div,primo=1;
		scanf ("%d",&vezes);
		for (cont=1;cont<=vezes;cont++){ 
			primo=1;
			scanf ("%d",&n);
			for(div=2;div<n;div++){
				if (n%div==0){
				primo=0;
				break;
				} // fim if
	    } // fim div
	if(primo==1)
		printf ("%d eh primo\n", n);
	else 
		printf ("%d nao eh primo\n",n);
	} // fim for vezes 
	return 0;
	}
