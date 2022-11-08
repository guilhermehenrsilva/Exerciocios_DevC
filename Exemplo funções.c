#include <stdio.h>
#include <math.h>
#define PI 3.1416
float areaCirculo(float raio){
	float r;
	r = PI*pow(raio,2);
	return r;
}//fim funcao area
//--------------------------------------------------------------------
int fatorial(int num){
	int cont, fat = 1;
	for (cont=1;cont<=num;cont++)
		fat = fat * cont;
	return fat;
}//fim funcao fatorial
//--------------------------------------------------------------------
int menu(){
	int op;
	printf ("*** Sistemas de Informacao ***\n ");
	printf ("1- Calculo da area de um circulo\n");
	printf (" 2- Fatorial\n");
	printf (" 0 - Sair\n");
	printf ("Entre com uma opcao: ");
	scanf  ("%d",&op);
	return op;
}//fim menu
//--------------------------------------------------------------------
int main(){
	int op,num;
	float raio;
	do{	
		op = menu();
	switch (op){
		case 1: printf ("Entre com o raio: ");
				scanf  ("%f",&raio);
				printf ("Area = %f\n",areaCirculo(raio));
			break;
		case 2: printf ("Entre com um numero: ");
				scanf  ("%d",&num);
				printf ("Fatorial de %d = %d\n",num,fatorial(num));
			break;
		case 0: printf ("saindo..\n");
			break;
		default: printf ("opcao invalida\n");
	}//fim switch
  }while(op!=0);
  return 0; 
}
