#include <stdio.h>
int main (){
	int ini,final,cont;
	printf ("Valor inicial e final de um numero");
	scanf ("%d%d", &ini,&final);
	cont = ini;
	while (cont<=final){
		printf ("%d\n", cont);
		cont++;
		Sleep(500); // pausa
	} // fim do while
	return 0;
}
