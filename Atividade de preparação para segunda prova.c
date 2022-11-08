#include <stdio.h>

float calImposto(float salario){
	float imposto=0;
		if (salario <= 1903.98)
			imposto = 0;
		 	 else if (salario >= 1903.99 && salario <= 2826.65)
				imposto = salario * (7.50/100);
				else if (salario >= 2826.66 && salario <= 3751.05)
					imposto = salario * (15.0/100);
					else if (salario >= 3751.06 && salario <= 4664,68)
						imposto = salario * (22.50/100);	
						else if(salario >= 4664.68 )
							imposto = salario * (27.50/100);

return imposto;
}
int main(){
	float salario,res, imposto [100], soma=0;
	int i , qtdFuncionarios;
	printf("Qtde de funcionarios:");
	scanf("%d",&qtdFuncionarios);
		for(i=0;i<qtdFuncionarios;i++){
		printf("Entre com o valor do salario:");
		scanf("%f",&salario);
		res = calImposto(salario);
		printf ("Imposto a ser retido: %.2f \n", res);
		imposto[i]=res;
} // fim for qtdfunc
	printf("***** RELATORIO ****\n");
		for(i=0;i<=qtdFuncionarios;i++){
			printf ("%.2f |",imposto[i]);
			soma+=imposto[i];
		}//fim for relatorio
		printf("\nSoma dos imposto: %.2f\n",soma);	
		return 0 ;
}
