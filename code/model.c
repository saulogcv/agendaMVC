
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "model.h"
#include "view.h"




tipo_Agenda cadastrarContato(tipo_Agenda ag, tipo_Contato contato){

	strcpy(ag.contatos[ag.qtd].nome, contato.nome);
	strcpy(ag.contatos[ag.qtd].telefone, contato.telefone);
	strcpy(ag.contatos[ag.qtd].email, contato.email);
	ag.qtd+=1;
	return ag;
}

int localizar(tipo_Agenda ag, char email[]){

	int t;
	for(t=0; t<ag.qtd; t++){
		if (strcmp (email, ag.contatos[t].email) == 0){
			return(1);
		}else{
			return(0);
		}
	}
}

tipo_Agenda excluir(tipo_Agenda ag, char email[]){
	int t;

	for(t=0; t<ag.qtd; t++){
		if (strcmp (email, ag.contatos[t].email) == 0){
			for(t; t<ag.qtd; t++){
					strcpy(ag.contatos[t].nome, ag.contatos[t+1].nome);
					strcpy(ag.contatos[t].telefone, ag.contatos[t+1].telefone);
					strcpy(ag.contatos[t].email, ag.contatos[t+1].email);

		}

	}


	}
	ag.qtd = ag.qtd-1;
	return ag;

}
