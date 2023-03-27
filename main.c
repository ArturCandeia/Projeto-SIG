#include <stdio.h>
#include <stdlib.h>

void tela_inicial(void);
void tela_sobre(void);
void tela_equipe(void);
void tela_paciente(void);
void tela_paciente_cadastrar(void);
void tela_paciente_buscar(void);
void tela_paciente_editar(void);
void tela_paciente_excluir(void);

int main(void) {
  tela_sobre();
  tela_equipe();
  tela_inicial();
  tela_paciente();
  tela_paciente_cadastrar();
  tela_paciente_buscar();
  tela_paciente_editar();
  tela_paciente_excluir();
  return 0;

}

void tela_inicial(void) {
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===           = = Sistema de Gerenciamento Clinico = =                      ===\n");
    printf("===                                                                         ===\n");
    printf("===            1. Módulo Paciente                                           ===\n");
    printf("===            2. Módulo Fúncionarios                                       ===\n");
    printf("===            3. Módulo Exames                                             ===\n");
    printf("===            0. Sair                                                      ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
}

void tela_paciente(void) {
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
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
}

void tela_paciente_cadastrar(void) {
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Cadastra paciente = =                           ===\n");
    printf("===                                                                         ===\n");
    printf("===                     Nome Completo:                                      ===\n");
    printf("===                     CPF:                                                ===\n");
    printf("===                     E-mail:                                             ===\n");
    printf("===                     Número de contato:                                  ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
}

void tela_paciente_buscar(void) {
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Busca paciente = =                              ===\n");
    printf("===                                                                         ===\n");
    printf("===                      CPF:                                               ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
}

void tela_paciente_editar(void) {
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Editar paciente = =                             ===\n");
    printf("===                                                                         ===\n");
    printf("===                      CPF:                                               ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
}

void tela_paciente_excluir(void) {
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Exclui paciente = =                             ===\n");
    printf("===                                                                         ===\n");
    printf("===                      CPF:                                               ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");

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
    printf("Aperte <ENTER> para");
    getchar();    
}

void tela_equipe(void) {
    system("clear||cls");
    printf("===========================================================void tela_projeto(void);====================\n");
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


