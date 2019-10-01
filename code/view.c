#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "control.h"
#include "model.h"


void exibirContato(tipo_Agenda ag, char email[]){
	int i;
	i = localizar(ag, email);
	if(i!=0){
		printf("\nNome: %sTelefone: %sEmail: %s\n", ag.contatos[i].nome, ag.contatos[i].telefone, ag.contatos[i].email);
	}
}


void main(){
	int opcao, a;
	char email[50];
	do {
		printf("\nSistema de Gerenciamento de Contatos Pessoais (SGCP) PUC-SP\n");
		printf("\n(1) - Cadastrar Contato\n");
		printf("\n(2) - Exibir Agenda Contato\n");
		printf("\n(3) - Localizar Contato\n");
		printf("\n(4) - Excluir Contato\n");
		printf("\n(5) - Sair do Programa\n");
		printf("\nSelecione a opcao Desejada: ");
		scanf("%d", &opcao);
		fflush(stdin);
		switch(opcao) {
		case 1: printf("\nCadastrar Contato\n");
			cadastrar();
		break;
		case 2: printf("\nContatos cadastrados\n");
			mostrar();
		break;
		case 3:printf("\nLocalizar contato\n");
			printf("Digite o email do contato que gostaria de localizar:\n");
			scanf("%c", email);
			a = local(email);
			if(a==1){
				printf("Contato localizado.\n");
			}else{
				printf("Contato não localizado");
			}
			break;
		case 4: printf("\nOpcao Excluir contato\n");
			printf("Digite o email do contato que gostaria de excluir:\n");
			scanf("%c", email);
			deletar(email);
		break;
		case 5:

			break;
		}
		fflush(stdin);
	} while (opcao!=5);
}
