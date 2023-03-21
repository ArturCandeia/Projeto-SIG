#include <stdio.h>

void tela_inicial(void);
void tela_sobre(void);
void tela_info(void);

int main(void) {
  tela_inicial();
  tela_sobre();
  tela_info();
  return 0;

}

void tela_inicial(void) {
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===            = = = = = Sistema de Gestão Escolar = = = = =                ===\n");
    printf("===                                                                         ===\n");
    printf("===            1. Módulo Aluno                                              ===\n");
    printf("===            2. Módulo Professor                                          ===\n");
    printf("===            3. Módulo Turma                                              ===\n");
    printf("===            4. Módulo Matrícula                                          ===\n");
    printf("===            5. Módulo Relatórios                                         ===\n");
    printf("===            0. Sair                                                      ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
}
