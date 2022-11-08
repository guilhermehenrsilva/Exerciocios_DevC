#include <stdio.h>
#include "matrizlib.h"

int main (){
	int m[100] [100], lin, cols, i, j;
	float par=0, impar=0, perPar,perImpar;
	printf ("Quantidade de linha e coluna: ");
	scanf ("%d%d", &lin,&cols);
	geraMatrix(m,lin,cols);
	printMatrix(m,lin,cols);
	 for (i=0;i<lin;i++){
	 	for (j=0;j<cols;j++)
	 		if (m[i][j]%2 == 0)
	 			par++;
	 		else 
				impar++;
	}//fim for 
	printf ("pares: %.0f \nImpares: %.0f \n", par,impar);
	perPar = (par /(lin*cols))*100;
	printf("porcentual de pares: %.2f \n", perPar);  
	perImpar = (impar /(lin*cols))*100;
	printf("porcentual de impares: %.2f \n", perImpar); 
	return 0;						
}
