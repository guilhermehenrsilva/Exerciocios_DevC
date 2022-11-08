#include <stdio.h>

int main(){
	int mat[100][100], lin,cols,i,j;
	printf("Quantidade de linhas e colunas:\n");
	scanf("%d%d", &lin,&cols);
	// lendo dados para matriz
	
		for(i=0;i<lin;i++){
		printf("Linha %d\n",i);
			for(j=0;j<cols;j++);{
			printf ("posicao[%d][%d]:",i,j);
			scanf("%d",&mat[i][j]);
	}// fim for do 'j'
	}// fim for 'i'
		
	return 0;
}
