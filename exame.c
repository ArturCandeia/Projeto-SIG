#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "exame.h"

void modulo_exame(){
  char opcao;

  do {
    opcao = tela_exame();
    switch(opcao) {
        case '1': tela_exame_cadastrar();
                  break;
        case '2': tela_exame_buscar();
                  break;
        case '3': tela_exame_editar();
                  break;
        case '4': tela_exame_excluir();
                  break;
    }
  }while (opcao != '0');
} 

char tela_exame(void) {
    char op;
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = = Módulo exames = =                                ===\n");
    printf("===                                                                         ===\n");
    printf("===                     1. Cadastrar exame                                  ===\n");
    printf("===                     2. Buscar exame                                     ===\n");
    printf("===                     3. Editar exame                                     ===\n");
    printf("===                     4. Excluir exame                                    ===\n");
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

Exame* tela_exame_cadastrar(void) {
  Exame *exa;
   exa =(Exame*) malloc(sizeof(Exame));


    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Cadastra Exames = =                             ===\n");
    printf("===                                                                         ===\n");
    printf("===                     Horario:");
    scanf("%[0-9:]",exa->horario);
    getchar();
    printf("===                     CRM do medico:");
    scanf("%[0-9]",exa->crm);
    getchar();
    printf("===                     Tipo de Exame:");
    scanf("%[A-Za-z -]",exa->id_exame);
    getchar();
    printf("===                     CPF do Paciente:");
    scanf("%[0-9]",exa->cpf);
    getchar();
    free(exa);
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
    return(exa);
}
 
 void tela_exame_buscar(void) {
    char cpf[12];
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Busca Exame = =                                 ===\n");
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

 void tela_exame_editar(void) {
    char cpf[12];
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Edita Exame = =                                 ===\n");
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
 void tela_exame_excluir(void) {
    char cpf[12];
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Exclui Exame = =                                ===\n");
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
