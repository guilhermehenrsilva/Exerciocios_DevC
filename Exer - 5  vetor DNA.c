//Leia um vetor DNA de caracteres para receber as letras A, T, C e G que representam as bases do DNA. Este
//vetor será responsável por representar uma fita de um gene de limite de 50 bases. Gere o vetor complementar
//ao vetor DNA e o apresente (Lembrando as bases complementares A=T C=G).

#include <stdio.h>
#include <string.h>


int main (){
	char dna[50], comp[50];
	int tamanho,i;
	printf ("Entre com a fita do DNA:");
	gets(dna);
	strupr(dna);
	tamanho = strlen(dna); // uppercase
	for(i=0;i<tamanho;i++){
		switch (dna[i]){
			case 'A': comp[i] = 'T';
			break;
			case 'T': comp[i] = 'A';
			break;
			case 'C': comp[i] = 'G';
			break;
			case 'G': comp[i] = 'C';
			break;
			default: comp [i] = ' ';
		}//fim do switch
	}//fim for 
	comp[tamanho] = '\0';
	printf ("*** FITA PRINCIPAL *** \n");
	puts (dna);
	printf ("*** FITA COMPLEMENTAR *** \n");
	puts (comp);
	return 0 ;
	
	//gerar a fita complementar
	// percorrer a principal 
	// if (dna[i] == 'A'
			// complentar = T;
	
}
