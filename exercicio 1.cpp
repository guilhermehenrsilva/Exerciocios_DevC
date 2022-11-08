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
	int qtdProdutos;
	float valorProduto;
	
	printf("\nQual a quantidade de produtos que deseja comprar? ");
	scanf("%d",&qtdProdutos);
	printf("\nQual o valor do produto? ");
	scanf("%f",&valorProduto);
	
	printf("\nValor total da compra: %.2f",desconto(qtdProdutos,valorProduto));
	
	return 0;
}
