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
void tela_funcionario(void);
void tela_funcionario_cadastrar(void);
void tela_funcionario_buscar(void);
void tela_funcionario_editar(void);
void tela_funcionario_excluir(void);

int main(void) {
  tela_sobre();
  tela_equipe();
  tela_inicial();
  tela_paciente();
  tela_paciente_cadastrar();
  tela_paciente_buscar();
  tela_paciente_editar();
  tela_paciente_excluir();
  tela_funcionario();
  tela_funcionario_cadastrar();
  tela_funcionario_buscar();
  tela_funcionario_editar();
  tela_funcionario_excluir();
  return 0;

}

void tela_inicial(void) {
    char op;
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
    printf("===            Escolha uma opção:");
    scanf("%c",&op);
    getchar();
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
}

void tela_paciente(void) {
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
}

void tela_paciente_cadastrar(void) {
    char nome[51];
    char cpf[12];
    char email[51];
    char phone[10];

    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Cadastra paciente = =                           ===\n");
    printf("===                                                                         ===\n");
    printf("===                     Nome Completo:");
    scanf("%[A-ZÁÃÂÉẼÊÍĨÎÓÕÔ a-záãâéẽêíĩîóõô]",nome);
    getchar();
    printf("===                     CPF:");
    scanf("%[0-9]",cpf);
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

void tela_funcionario(void) {
    char op;
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = = Módulo Fúncionarios = =                          ===\n");
    printf("===                                                                         ===\n");
    printf("===                     1. Cadastrar Fúncionario                            ===\n");
    printf("===                     2. Buscar Fúncionario                               ===\n");
    printf("===                     3. Editar Fúncionario                               ===\n");
    printf("===                     4. Excluir Fúncionario                              ===\n");
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
}

void tela_funcionario_cadastrar(void) {
    char nome[51];
    char cpf[12];
    char email[51];
    char phone[10];

    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Cadastra Fúncionarios = =                       ===\n");
    printf("===                                                                         ===\n");
    printf("===                     Nome Completo:");
    scanf("%[A-ZÁÃÂÉẼÊÍĨÎÓÕÔ a-záãâéẽêíĩîóõô]",nome);
    getchar();
    printf("===                     CPF:");
    scanf("%[0-9]",cpf);
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

void tela_funcionario_buscar(void) {
    char cpf[12];
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Busca Fúncionario = =                           ===\n");
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

void tela_funcionario_editar(void) {
    char cpf[12];
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Edita Fúncionario = =                           ===\n");
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

void tela_funcionario_excluir(void) {
    char cpf[12];
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Exclui Fúncionario = =                          ===\n");
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


