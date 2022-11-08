// FOR(I=0;I<N-2;I++)
// if (dna [i]=a && dna[i+1]=='T' && dna =[i+2]== 'G')
// Existe=I;

#include <stdio.h>
#include <string.h>
int starCodon(char dna [100], int n){
	int i, pos = -1;
	strupr(dna); // uppercase
	for(i=0;i<n-2;i++){
		if (dna[i]=='A'&& dna[i+1]=='T'&& dna [i+2] == 'G'){
		pos = i;
		break;
		}// fim if
	}//fim for
	return pos;
} // fim função

//-------------------------------------
int main (){
	char dna[100];
	int res, n ;
	printf ("Sequencia do DNA");
	fflush (stdin); // limpa buffer
	gets (dna);
	n = strlen (dna);
	res = starCodon(dna, n);
	if (res == -1)
		printf (" Nao possui inicio de gene \n");
	else
		printf("Gene se incia em %d\n", res);
		return 0;
	}





