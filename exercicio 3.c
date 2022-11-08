#include <stdio.h>
#include "matrizlib.h"

int main(){
	
	int mat[100][100],lin, cols,busca,cont=0;
	int i,j,res,maior;
	printf("Quantidade de linhas e colunas:\n");
		scanf("%d%d",&lin,&cols);
	carregaMatrix(mat,lin,cols);
		printf ("*** MATRIZ ***\n");
			printMatrix(mat,lin,cols);
	for (i=0;i<lin;i++)
		for (j=0;j<cols;j++)
			if(mat[i][j]>busca)
				cont++;
		menorMatrix(mat,lin,cols);
			res = menorMatrix(mat,lin,cols);
				printf("Menor valor da matriz: %d\n", res);
			maiorMatrix(mat,lin,cols);
				maior = maiorMatrix(mat,lin,cols);
					printf ("Maior valor da matriz %d\n", maior);
		return 0;
	}
