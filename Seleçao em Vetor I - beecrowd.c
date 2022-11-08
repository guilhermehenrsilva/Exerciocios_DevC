#include <stdio.h>
# define MAX 100
int main(){
	int i;
	float vet[MAX];
	for(i=0;i<MAX;i++){
		scanf("%f",&vet[i]);
	}//fim for leia vetor
	for (i=0;i<MAX;i++)
		if (vet[i]<=10)
			printf ("A[%d] = %.1f\n",i,vet[i]);
 	return 0;			
}
