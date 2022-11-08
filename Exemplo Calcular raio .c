#include <stdio.h>
#include <math.h>
#define PI 3.1416
float areaCirculo(float raio){
	float r;
	//r=PI*pow(raio,2);
	r=3.1416*raio*raio;
	return r;
}// fim da função area
int main(){
	float raio, res ;
	printf ("** CALCULO AREA CIRCULO**\n");
	scanf("%f", &raio);
	res = areaCirculo(raio);
	printf("Resultado:%.2f",res);
	return 0;
} //Fim main 
//------------------------------------------------------
int fatorial (int num){
	int cont, fat = 1;
	for (cont=1;cont<=num;cont++)
		fat = fat * cont;
	return fat;	
}
int menu (){
	int op;
	printf ("** SISTEMA DE INFORMAÇÃO *** \n");
	printf ("1- Calculo da area de um circulo \n");
	printf ("2- Fatorial\n");
	printf ("0- sair\n");
	printf ("%Entre com a opcao:\n");
	scanf  ("%d", &op);
	return op ;	
}
	int main (){	
	
}
