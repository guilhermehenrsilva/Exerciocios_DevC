#include <stdio.h>

int main(){
	int A,B,r;
	do {
		scanf("%d%d",&A,&B);
		if 	(r=A+B)
			printf("X = %d\n",r);
		else 
			printf ("Presentation Error");	
		}while (r!=0);
	return 0;
}
