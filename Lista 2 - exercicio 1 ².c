//1. Receba ou gere uma matriz N por M e conte quantos números maiores que X existem na matriz. X deve ser
//informado pelo usuário.

#include <stdio.h>
#include "matrizlib.h"

int main (){
	int m[100] [100], lin, cols, i, j,n;
	printf ("Quantidade de linha e coluna: ");
	scanf ("%d%d", &lin,&cols);
	geraMatrix(m,lin,cols);
	printMatrix(m,lin,cols);
	return 0 ;
}
