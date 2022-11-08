#include <stdio.h>
#include "matrizlib.h"

int main(){
	
	int mat[100][100],ordem,soma=0,soma2=0;
	int i,j;
	printf("Ordem da matriz:\n");
	scanf("%d",&ordem);
	carregaMatrix(mat,ordem, ordem);
	printf ("*** MATRIZ ***\n");
	printMatrix(mat,ordem,ordem);
	printf("Diagonal Principal\n");
	for(i=0;i<ordem;i++){
		printf ("%d |", mat[i][i]);
	soma+=mat[i][i];
}//fim do for
	printf ("\n soma da diagonal principal:%d\n",soma);
	printf("\n Diagonal segundaria\n");
	j=ordem-1;
		for(i=0;i<ordem;i++){
			printf ("%d |", mat[i][j]);
		soma2+=mat[i][j];
		j--;
	}//fim do for
	printf ("\n soma da diagonal segundaria:%d\n",soma2);
 return 0 ;
}
