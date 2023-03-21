#include <stdio.h>

void tela_inicial(void);
void tela_sobre(void);
void tela_equipe(void);

int main(void) {
  tela_inicial();
  tela_sobre();
  tela_equipe();
  return 0;

}

void tela_inicial(void) {
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===           = = Sistema de Gerenciamento Clinico = =                      ===\n");
    printf("===                                                                         ===\n");
    printf("===            1. Módulo Paciente                                           ===\n");
    printf("===            2. Módulo Fúncionarios                                       ===\n");
    printf("===            3. Módulo                                                    ===\n");
    printf("===            4. Módulo                                                    ===\n");
    printf("===            0. Sair                                                      ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
}

void tela_sobre(void) {
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
}

void tela_equipe(void) {
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
}
