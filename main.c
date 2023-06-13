#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "paciente.h"
#include "medico.h"
#include "exame.h"

char tela_inicial(void);
char tela_lista(void);
void tela_sobre(void);
void tela_equipe(void);
int lista(void);

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
        case '5':lista();
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
    printf("===            2. Módulo Medico                                             ===\n");
    printf("===            3. Módulo Exames                                             ===\n");
    printf("===            4. Tela sobre                                                ===\n");
    printf("===            5. Listagens                                                 ===\n");
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

char tela_lista(void){
    char op;
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                         = = Listagem = =                                ===\n");
    printf("===                                                                         ===\n");
    printf("===            1. Listagem Exames                                           ===\n");
    printf("===            2. Listagem Medicos                                          ===\n");
    printf("===            3. Listagem Pacientes                                        ===\n");
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

int lista(void) {
  char opcao;

  do {
    opcao = tela_lista();
    switch(opcao) {
        case '1': lista_exames();
                  break;
        case '2': lista_medicos();
                  break;
        case '3': lista_pacientes();
                  break;
    }
  }while (opcao != '0');
  
  return 0;
}
