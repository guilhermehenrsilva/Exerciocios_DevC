#include <stdio.h>
#include "vetlib.h"

int main(){
	int vet[100],n,busca,res;
		printf ("Quantidade de elementos do vetor:");
				scanf("%d",&n);
				geraVet(vet,n);
			printf ("Vetor gerado;\n");
		printVet(vet,n);
			printf("Valor para busca");
				scanf ("%d",&busca);
				res = existe(busca,vet,n);
			printf ("%d Encontrado %d vez(es)\n",busca,res);
		
		
		return 0;			
	}


