#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "paciente.h"

void modulo_paciente(void) {
    char opcao;
    do{
        opcao = tela_paciente();
        switch(opcao){
            case '1': tela_paciente_cadastrar();
                      break;
            case '2': tela_paciente_buscar();
                      break;
            case '3': tela_paciente_editar();
                      break;
            case '4': tela_paciente_excluir();
                      break;
        }
    }while (opcao != '0');
}

char tela_paciente(void) {
    char op;
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = = Módulo paciente = =                              ===\n");
    printf("===                                                                         ===\n");
    printf("===                     1. Cadastrar Paciente                               ===\n");
    printf("===                     2. Buscar Paciente                                  ===\n");
    printf("===                     3. Editar Paciente                                  ===\n");
    printf("===                     4. Excluir Paciente                                 ===\n");
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

Paciente* tela_paciente_cadastrar(void) {
    Paciente *pac;
     pac = (Paciente*) malloc(sizeof(Paciente));

    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Cadastra paciente = =                           ===\n");
    printf("===                                                                         ===\n");
    printf("===                     Nome Completo:");
    scanf("%[A-ZÁÃÂÉẼÊÍĨÎÓÕÔ a-záãâéẽêíĩîóõô]",pac->nome);
    getchar();
    printf("===                     CPF:");
    scanf("%[0-9]",pac->cpf);
    getchar();
    printf("===                     E-mail:");
    scanf("%[A-Za-z@._0-9]",pac->email);
    getchar();
    printf("===                     Número de contato:");
    scanf("%[0-9]",pac->phone);
    getchar();
    free(pac);
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
}

void tela_paciente_buscar(void) {
    char cpf[12];
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Busca paciente = =                              ===\n");
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

void tela_paciente_editar(void) {
    char cpf[12];
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Editar paciente = =                             ===\n");
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

void tela_paciente_excluir(void) {
    char cpf[12];
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Exclui paciente = =                             ===\n");
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