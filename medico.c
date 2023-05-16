#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "medico.h"

void modulo_medico(){
  char opcao;
  
  do {
    opcao = tela_medico();
    switch(opcao) {
        case '1': tela_medico_cadastrar();
                  break;
        case '2': tela_medico_buscar();
                  break;
        case '3': tela_medico_editar();
                  break;
        case '4': tela_medico_excluir();
                  break;
    }
  }while (opcao != '0');
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

void tela_medico_cadastrar(void) {
    char nome[51];
    char crm[10];
    char email[51];
    char phone[10];

    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Cadastra Médicos = =                            ===\n");
    printf("===                                                                         ===\n");
    printf("===                     Nome Completo:");
    scanf("%[A-ZÁÃÂÉẼÊÍĨÎÓÕÔ a-záãâéẽêíĩîóõô]",nome);
    getchar();
    printf("===                     CPF:");
    scanf("%[0-9]",crm);
    getchar();
    printf("===                     E-mail:");
    scanf("%[A-Za-z@._0-9]",email);
    getchar();
    printf("===                     Número de contato:");
    scanf("%[0-9]",phone);
    getchar();
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
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