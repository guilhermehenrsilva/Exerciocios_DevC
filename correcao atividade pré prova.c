#include <stdio.h>

float compraDesconto(int qtd, float valor){
	float total;
	total = qtd * valor;
	if(qtd>=3 && qtd<=5)
	   total = total - (total*0.05);
	else
	  if(qtd>5 && qtd<=10)
	  	total = total - (total*0.1);  
		else
		   if(qtd>10)
		     total = total - (total*0.15);   
	return total;
}

int main (){
		int qtd,op,cont=0 , i ;
		float valor , res, venda [100],soma;
	do{
		printf ("*** Sistema de vendas Ratanaba***\n");
		printf("1- Realizar Venda\n2- Mostrar vendas\n0- Sair\n");
		scanf ("%d", &op);
	switch(op){
		case 1:
			printf ("Quantidade de itens e valor unitario:");
			scanf("%d%f", &qtd, &valor);
			res = compraDesconto(qtd,valor);
			printf ("valor da compra:%.2f\n",res);
			venda[cont] = res ;
			cont++;
		break;
		case 2: printf ("Relatorio de vendas\n");
				for(i=0;i<cont;i++){
					printf("%.2f| ", venda[i]);
					soma+=venda[i];
				}// fim for
				printf("\nTotal vendas: %.2f\n",soma);
		break;	
			
	}
	}while(op!=0);
	

return 0 ;
} // fim main 
