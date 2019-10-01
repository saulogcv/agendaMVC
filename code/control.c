#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "model.h"
#include "view.h"


tipo_Agenda AG;

tipo_Contato cadastro(){
	tipo_Contato contato;
	fflush(stdin);
	printf("Nome: ");
	fflush(stdin);
	fgets(contato.nome,50,stdin);
	printf("Telefone: ");
	fgets(contato.telefone,30,stdin);
	printf("E-mail: ");
	fgets(contato.email,20,stdin);
	return(contato);
}

void cadastrar(){
	AG = cadastrarContato( AG, cadastro());
}
void mostrar(){
	mostrarAgenda(AG);
}

int local(char email[]){
	int x;
	x=localizar(AG, email);
	return x;
}


void mostrarAgenda(tipo_Agenda ag){
	int i;
	for(i=0; i<ag.qtd; i++){
		printf("\nNome: %sTelefone: %sEmail: %s\n", ag.contatos[i].nome, ag.contatos[i].telefone, ag.contatos[i].email);
	}

}

void deletar(char email[]){
	AG=excluir(AG, email);
}

