#include <stdio.h>

float desconto(int qtd,float valor){
	float desc,mult=0;
	if(qtd>=3 && qtd<=5){
		desc = valor*0.95;
	}
	else if(qtd>5 && qtd<=10){
		desc = valor*0.90;
	}
	else if(qtd>10){
		desc = valor*0.85;
	}
	
	mult = desc * qtd;
	return mult;
}

int main(){
	int qtdProdutos,op,i,cont=0;
	float valorProduto,vendas[100],soma=0;
	
		do{
		printf("\n*** Sistemas de Vendas Ratanaba ***\n");
		printf("1 - Realizar venda\n");
		printf("2- Mostrar Venda\n");
		printf("0 - Sair\n");
		scanf("%d",&op);
		
		
		if(op==1){
			printf("\nQtde de itens e valor unitario: ");
			scanf("%d%d",&qtdProdutos,&vendas[cont]);
			cont++;
		}
		else if(op==2){
			for(i=0;i<cont;i++){
				soma+=vendas[cont];
				printf("R$ %f|",desconto(qtdProdutos,vendas[cont]));
		}
	}
					scanf ("%d",&vendas);
					printf("\nValor da compra: %f\n",soma);
	
		}while(op!=0);
}
