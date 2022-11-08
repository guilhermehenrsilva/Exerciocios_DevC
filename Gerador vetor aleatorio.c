#include <stdio.h>
#include <stdlib.h>
#include "vetlib.h"



//-------------------------------------------------------------

int main(){
	int vet[100], n;
	printf ("Quantidade de elementos do vetor:");
	scanf ("%d",&n);
	//printf ("Entre com os dados para o vetor:");
	//leiaVetor(vet,n);
	geraVet(vet,n);
	printf ("Vetor \n");
	printVet(vet,n);
    printf("soma do vetor:%d\n",somaVet(vet,n));
    printf ("O maior elemento:%d\n",maiorVet(vet,n));
    printf ("O Menor elemento:%d\n",menorVet(vet,n));
	return 0 ;
}

