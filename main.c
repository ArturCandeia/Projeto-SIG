#include <stdio.h>

void tela_inicial(void);
void tela_sgobre(void);
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
