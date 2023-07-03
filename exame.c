#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "verifica.h"
#include "exame.h"

void modulo_exame(){
  char opcao;

  do {
    opcao = tela_exame();
    switch(opcao) {
        case '1': exame_cadastrar();
                  break;
        case '2': exame_buscar();
                  break;
        case '3': exame_editar();
                  break;
        case '4': exame_excluir();
                  break;
    }
  }while (opcao != '0');
} 

void exame_cadastrar(void){
    Exame *exa;
    exa = tela_exame_cadastrar();
    gravar_exame(exa);

    free(exa);
}

void exame_buscar(void){
    Exame* exa;
    char* cpf;

    cpf = tela_exame_buscar();
    exa = achar_exame(cpf);
    exibe_exame(exa);
    free(exa);
    free(cpf);
}

void exame_editar(void) {
    Exame* exa;
    char* cpf;

    cpf = tela_exame_editar();
    exa = achar_exame(cpf);
    if (exa == NULL){
        printf("Ocorreu um erro \n");
        printf("Exame não encontrado\n");
    } else {
        exa = tela_exame_cadastrar();
        strcpy(exa->cpf, cpf);
        regravar_exame(exa);
        free(exa);
    }
    free(cpf);
}

void exame_excluir(void) {
    Exame* exa;
    char *cpf;

    cpf = tela_exame_excluir();
    exa = (Exame*) malloc(sizeof(Exame));
    exa = achar_exame(cpf);
    if (exa == NULL) {
        printf("Exame inexistente \n");
    } else { 
        exa->status = 0;
        regravar_exame(exa);
        free(exa);
    }
    free(cpf);
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
    scanf("%[0-9:]",exa->datahora);
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
    exa->status = True;
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
    return(exa);
}
 
 char* tela_exame_buscar(void) {
    char* cpf;

    cpf = (char*) malloc(12*sizeof(cpf));
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
    return cpf;
}

 char* tela_exame_editar(void) {
    char* cpf;

    cpf = (char*) malloc(12*sizeof(cpf));
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
    return cpf;
}
 char* tela_exame_excluir(void) {
    char* cpf;

    cpf = (char*) malloc(12*sizeof(cpf));
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
    return cpf;
}

void tela_error_exame(void){
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                Houve um erro ao acessar o arquivo                       ===\n");
    printf("===                Tente novamente!                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
}

void exibe_exame(Exame *exa) {
    if (exa == NULL) {
        printf("Exame não encontrado \n");
    } else {
        system("clear||cls");
        printf("=Dados do Exame= \n");
        printf("id exame: %s\n", exa->id_exame);
        printf("cpf: %s\n", exa->cpf);
        printf("crm: %s\n", exa->crm);
        printf("data e hora: %s\n", exa->datahora);
        printf("status %d\n", exa->status);
    }
    printf("Aperte <ENTER> para continuar \n");
    getchar();
}

void gravar_exame(Exame* exa){
    FILE* fp;

    fp = fopen("exame.dat","ab");
    if (fp == NULL) {
         tela_error_exame();
    }
    fwrite(exa, sizeof(Exame), 1, fp);
    fclose(fp);
}

void regravar_exame(Exame* exa) {
    int encontrado;
    FILE* fp;
    Exame* exaVisto;

    exaVisto = (Exame*) malloc(sizeof(Exame));
    fp = fopen("exame.dat","r+b");
    if(fp == NULL) {
        tela_error_exame();
    }
    encontrado = False;
    while(fread(exaVisto, sizeof(Exame), 1, fp) && !encontrado){
        if (strcmp(exaVisto->cpf, exa->cpf)==0){
            encontrado = True;
            fseek(fp, -1*sizeof(Exame), SEEK_CUR);
        fwrite(exa, sizeof(Exame), 1, fp);
        }
    }
    fclose(fp);
    free(exaVisto);
}

Exame* achar_exame(char* cpf) {
    FILE* fp;
    Exame* exa;

    exa = (Exame*) malloc(sizeof(Exame));
    fp = fopen("exame.dat","rb");
    if (fp == NULL) {
        tela_error_exame();
    }
    while(fread(exa, sizeof(Exame), 1,fp)) {
        if ((strcmp(exa->cpf, cpf)== 0) && (exa->status == True)) {
            fclose(fp);
            return exa;
        }
    }
    fclose(fp);
    return NULL;
}

void lista_exames(void){
    FILE *fp;
    Exame* exa;

    exa = (Exame*) malloc(sizeof(Exame));
    fp = fopen("exame.dat","rb");
    while (fread(exa,sizeof(Exame),1,fp)) {
        system("clear||cls");
        printf("=Dados do Exame= \n");
        printf("id exame: %s\n", exa->id_exame);
        printf("cpf: %s\n", exa->cpf);
        printf("crm: %s\n", exa->crm);
        printf("data e hora: %s\n", exa->datahora);
        printf("status %d\n", exa->status);
    }
    printf("Aperte ENTER para continuar \n");
    getchar();
    fclose(fp);
    free(exa);
}

void lista_exame_crm(void){
    char crm[10];
    FILE *fp;
    Exame* exa;
    exa = (Exame*) malloc(sizeof(Exame));
    fp = fopen("exame.dat","rb");
    printf("Digite o crm de um medico:");
    scanf("%s",crm);
    while (fread(exa,sizeof(Exame),1,fp)) {
        if(strcmp(exa->crm,crm)== 0){
            system("clear||cls");
            printf("=Dados do Exame= \n");
            printf("id exame: %s\n", exa->id_exame);
            printf("cpf: %s\n", exa->cpf);
            printf("crm: %s\n", exa->crm);
            printf("data e hora: %s\n", exa->datahora);
            printf("status %d\n", exa->status);
            getchar();
        }
    }
    printf("Aperte ENTER para continuar \n");
    getchar();
    fclose(fp);
    free(exa);
}