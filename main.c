#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "paciente.h"
#include "medico.h"

char tela_inicial(void);
void tela_sobre(void);
void tela_equipe(void);

void modulo_exame(void);
char tela_exame(void);
void tela_exame_cadastrar(void);
void tela_exame_buscar(void);
void tela_exame_editar(void);
void tela_exame_excluir(void);

int main(void) {
  char opcao;

  do {
    opcao = tela_inicial();
    switch(opcao) {
        case '1': modulo_paciente();
                  break;
        case '2': modulo_medico();
                  break;
        case '3': modulo_exame();
                  break;
        case '4': tela_sobre();
                  tela_equipe();
                  break;
    }
  }while (opcao != '0');
  
  return 0;
}

char tela_inicial(void) {
    char op;
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===           = = Sistema de Gerenciamento Clinico = =                      ===\n");
    printf("===                                                                         ===\n");
    printf("===            1. Módulo Paciente                                           ===\n");
    printf("===            2. Módulo Fúncionarios                                       ===\n");
    printf("===            3. Módulo Exames                                             ===\n");
    printf("===            4. Tela sobre                                                ===\n");
    printf("===            0. Sair                                                      ===\n");
    printf("===                                                                         ===\n");
    printf("===            Escolha uma opção:");
    scanf("%c",&op);
    getchar();
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
    return op;
}

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

void tela_exame_cadastrar(void) {
    char horario[6];
    char medico[12];
    char exame[51];
    char cpf[12];

    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Cadastra Exames = =                             ===\n");
    printf("===                                                                         ===\n");
    printf("===                     Horario:");
    scanf("%[0-9:]",horario);
    getchar();
    printf("===                     CPF do medico:");
    scanf("%[0-9]",medico);
    getchar();
    printf("===                     Tipo de Exame:");
    scanf("%[A-Za-z -]",exame);
    getchar();
    printf("===                     CPF do Paciente:");
    scanf("%[0-9]",cpf);
    getchar();
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
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


void tela_sobre(void) {
    system("clear||cls");
    printf("\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===             Universidade Federal do Rio Grande do Norte                 ===\n");
    printf("===                 Centro de Ensino Superior do Seridó                     ===\n");
    printf("===               Departamento de Computação e Tecnologia                   ===\n");
    printf("===                  Disciplina DCT1106 -- Programação                      ===\n");
    printf("===                  Projeto Sistema de Gerenciamento Clinico               ===\n");
    printf("===             Developed by @ArturCandeia -- since Mar, 2023               ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===             Este programa é uma gestão de clinicas com o intuito        ===\n");
    printf("===             de facilitar o uso de dados de pacientes a melhorar         ===\n");
    printf("===             o fluxo de dados em clinicas                                ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();    
}

void tela_equipe(void) {
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===            = = Sistema de de Gerenciamento Clinico = =                  ===\n");
    printf("===                                                                         ===\n");
    printf("===            Este projeto foi desenvolvido por:                           ===\n");
    printf("===                                                                         ===\n");
    printf("===            nome: Artur Morais Candeia                                   ===\n");
    printf("===            E-mail: arturr.candeia@gmail.com                             ===\n");
    printf("===            Git: https://github.com/ArturCandeia/Projeto-SIG-Clinic.git  ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
}


