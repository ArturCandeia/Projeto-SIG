#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "medico.h"

void modulo_medico(){
  char opcao;
  
  do {
    opcao = tela_medico();
    switch(opcao) {
        case '1': medico_cadastrar();
                  break;
        case '2': medico_buscar();
                  break;
        case '3': medico_editar();
                  break;
        case '4': medico_excluir();
                  break;
    }
  }while (opcao != '0');
} 

void medico_cadastrar(void){
    Medico *med;
    med = tela_medico_cadastrar();

    free(med);
}

void medico_buscar(void){
    tela_medico_buscar();
}

void medico_editar(){
    tela_medico_editar();
}

void medico_excluir(){
    tela_medico_excluir();
}

char tela_medico(void) {

    char op;

    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = = Módulo Médicos = =                               ===\n");
    printf("===                                                                         ===\n");
    printf("===                     1. Cadastrar médico                                 ===\n");
    printf("===                     2. Buscar médico                                    ===\n");
    printf("===                     3. Editar médico                                    ===\n");
    printf("===                     4. Excluir médico                                   ===\n");
    printf("===                     0. Sair                                             ===\n");
    printf("===                                                                         ===\n");
    printf("===                     Escolha uma opção:");
    scanf("%c",&op);
    getchar();
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
    return op;
}

Medico *tela_medico_cadastrar(void) {

    Medico *med;
     med = (Medico*) malloc(sizeof(Medico));

    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Cadastra Médicos = =                            ===\n");
    printf("===                                                                         ===\n");
    printf("===                     Nome Completo:");
    scanf("%[A-ZÁÃÂÉẼÊÍĨÎÓÕÔ a-záãâéẽêíĩîóõô]",med->nome);
    getchar();
    printf("===                     CPF:");
    scanf("%[0-9]",med->crm);
    getchar();
    printf("===                     E-mail:");
    scanf("%[A-Za-z@._0-9]",med->email);
    getchar();
    printf("===                     Número de contato:");
    scanf("%[0-9]",med->phone);
    getchar();
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
    return(med);
}

void tela_medico_buscar(void) {
    char cpf[12];
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Busca Médico = =                                ===\n");
    printf("===                                                                         ===\n");
    printf("===                      CPF:");
    scanf("%[0-9]",cpf);
    getchar();
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
}

void tela_medico_editar(void) {
    char cpf[12];
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Edita Médico = =                                ===\n");
    printf("===                                                                         ===\n");
    printf("===                      CPF:");
    scanf("%[0-9]",cpf);
    getchar();
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
}

void tela_medico_excluir(void) {
    char cpf[12];
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Exclui Médico = =                               ===\n");
    printf("===                                                                         ===\n");
    printf("===                      CPF:");
    scanf("%[0-9]",cpf);
    getchar();
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
}