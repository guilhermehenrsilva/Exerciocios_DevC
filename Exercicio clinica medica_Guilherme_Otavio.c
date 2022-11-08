#include <stdio.h>
#include <string.h>
// clinica médica
typedef struct{
	char nome[40];
	char CPF[15];
	int idade ;
}paciente;
int qtd=0; // controlar a posicao de cadastro no vetor
//------------------------------------------------------
void addPaciente(paciente p[]){
	printf("Nome do paciente: ");
	fflush(stdin);// limpa o buffer do teclado
	gets(p[qtd].nome);
	printf("CPF do paciente: ");
	fflush(stdin);// limpa o buffer do teclado
	gets(p[qtd].CPF);
	printf("Idade do paciente: ");
	scanf("%d",&p[qtd].idade);
	qtd++;
}
void listaPaciente(paciente p[]){
	int i;
	for(i=0;i<qtd;i++){
		printf("** Paciente %d **\n",i+1);
		printf("Nome:%s\n",p[i].nome);
		printf("CPF:%s\n",p[i].CPF);
		printf("Idade do paciente:%d\n", p[i].idade);
		printf("------------------------\n");
	}// fim for
}
//------------------------------------------------
int listaNome(paciente p[], char nomeBusca[40]){
	int i;
	char nomeAux[40];
	for(i=0;i<qtd;i++){
		strcpy(nomeAux,p[i].nome); // copiando do vetor para aux
		strupr(nomeAux);// uppercase
		if(strcmp(nomeBusca,nomeAux)==0){
		printf("** Paciente %d **\n",i+1);
		printf("Nome:%s\n",p[i].nome);
		printf("CPF:%s\n",p[i].CPF);
		printf("Idade do paciente:%d\n", p[i].idade);
		printf("------------------------\n");
		return i;
		} // fim do if
	}// fim do for
	return -1;
}
// ---------------------------------------------
void salvaArquivo(paciente p[]){
	FILE *arq;
	int i=0;
	arq=fopen("dadosPaciente.txt","wb");
	fwrite(&p[i],sizeof(paciente),qtd,arq);
	printf("Dados salvos com sucesso\n");
	fclose(arq);
}
//-----------------------------------------------
void carregaArquivo(paciente p[]){
	FILE *arq;
	arq=fopen("dadosPaciente.txt","rb");
	if(arq==NULL){
	  printf("Arquivo nao encontrado :(\n");
	  return;
	  }// fim if
	 while(fread(&p[qtd],sizeof(paciente),1,arq) >0 )
	      qtd++;  
	 printf("Dados carregados com sucesso !\n");
	fclose(arq);
}
// ---------------------------------------------
int menu(){
	int opcao;
	printf("*** Sistema de Cadastro Paciente ***\n");
	printf("1- Cadastrar\n");
	printf("2- Listar\n");
	printf("3- Filtro por nome\n");	
	printf("0- Salvar Arquivo");
	scanf("%d",&opcao);
	return opcao;
}// fim menu
//-----------------------------
int main(){
	paciente p [100];
	int opcao, busca;
	char nomeBusca[40]; 
	carregaArquivo(p);
	do{
		opcao= menu();
		switch(opcao){
			case 1: addPaciente(p);
			break;
			case 2: listaPaciente(p); 
			break;
			case 3: printf("Filtro por nome:");
					fflush(stdin);//limpa buffer
					gets(nomeBusca);
					strupr(nomeBusca);// uppercase
						if(listaNome(p, nomeBusca)==-1)
						printf ("paciente nao encontrada :( \n");
			case 0: printf("Saindo...\n");
					salvaArquivo(p);			
			break;		
			default : printf ("opcao invalida");
		} // fim do switch
		 getch(); // pausa
	  system("cls"); // limpa tela	
	}while(opcao!=0);
	return 0;
}

	

