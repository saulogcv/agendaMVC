
#ifndef MODEL_H_
#define MODEL_H_

#define N 100  // capacidade de contados na agenda

void flush_in();


typedef struct Contato {
         char nome[50];
         char telefone[30];
         char email[50];

} tipo_Contato;

typedef struct Agenda {
        tipo_Contato contatos[N];
        int qtd;
} tipo_Agenda;


tipo_Agenda cadastrarContato(tipo_Agenda ag, tipo_Contato contato);
int localizar(tipo_Agenda ag, char email[]);
tipo_Agenda excluir(tipo_Agenda ag, char email[]);


#endif
