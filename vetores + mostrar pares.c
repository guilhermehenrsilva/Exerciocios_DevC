#include <stdio.h>
int main (){
	int vet[10],i,n,contPar=0,somaPar=0;
	printf("quantidade de valores do vetor: ");
	scanf ("%d", &n);
	for (i=0;i<n;i++){
		printf ("vetor [%d] ",i);
		scanf("%d",&vet[i]);
	}// fim for leia vetor
	// percorrer o vetor, mostrar e contar pares
	printf ("\n*** VETOR RECEBIDO *** \n");
	for (i=0;i<n;i++){
			printf ("%d | ", vet[i] ,"\n\n");
				if (vet[i]%2==0){
				 contPar++;
				 somaPar+=vet[i];	
		} // fim if vet [i] par
	} // fim for mostra
	printf("\nQuantidade pares:%d", contPar);
	printf("\nSoma dos pares:%.2d\n",somaPar);
	printf ("\nMedia: %.2d", somaPar/contPar);
	return 0 ;
	
}
