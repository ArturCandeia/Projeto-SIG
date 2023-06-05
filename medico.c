#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "medico.h"
#include "verifica.h"

void modulo_medico(){
  char opcao;
  
  do {
    opcao = tela_medico();
    switch(opcao) {
        case '1': medico_cadastrar();
                  break;
        case '2': medico_buscar();
                  break;
        case '3': medico_editar();
                  break;
        case '4': medico_excluir();
                  break;
    }
  }while (opcao != '0');
} 

void medico_cadastrar(void){
    Medico *med;
    med = tela_medico_cadastrar();
    gravar_medico(med);

    free(med);
}

void medico_buscar(void){
    Medico* med;
    char* crm;

    crm = tela_medico_buscar();
    med = achar_medico(crm);
    exibe_medico(med);
    free(med);
    free(crm);
}

void medico_editar(void) {
    Medico* med;
    char* crm;

    crm = tela_medico_editar();
    med = achar_medico(crm);
    if (med == NULL){
        printf("Ocorreu um erro \n");
        printf("Medico não encontrado\n");
    } else {
        med = tela_medico_cadastrar();
        strcpy(med->crm, crm);
        regravar_medico(med);
        free(med);
    }
    free(crm);
}

void medico_excluir(void) {
    Medico* med;
    char *crm;

    crm = tela_medico_excluir();
    med = (Medico*) malloc(sizeof(Medico));
    med = achar_medico(crm);
    if (med == NULL) {
        printf("Medico inexistente \n");
    } else { 
        med->status = 0;
        regravar_medico(med);
        free(med);
    }
    free(crm);
}

char tela_medico(void) {

    char op;

    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = = Módulo Médicos = =                               ===\n");
    printf("===                                                                         ===\n");
    printf("===                     1. Cadastrar médico                                 ===\n");
    printf("===                     2. Buscar médico                                    ===\n");
    printf("===                     3. Editar médico                                    ===\n");
    printf("===                     4. Excluir médico                                   ===\n");
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

Medico *tela_medico_cadastrar(void) {

    Medico *med;
     med = (Medico*) malloc(sizeof(Medico));

    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Cadastra Médicos = =                            ===\n");
    printf("===                                                                         ===\n");
    printf("===                     Nome Completo:");
    scanf("%[A-ZÁÃÂÉẼÊÍĨÎÓÕÔ a-záãâéẽêíĩîóõô]",med->nome);
    getchar();
    printf("===                     crm:");
    scanf("%[0-9]",med->crm);
    getchar();
    printf("===                     E-mail:");
    scanf("%[A-Za-z@._0-9]",med->email);
    getchar();
    printf("===                     Número de contato:");
    scanf("%[0-9]",med->phone);
    getchar();
    med->status = True;
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
    return(med);
}

char* tela_medico_buscar(void) {
    char* crm;

    crm = (char*) malloc(10*sizeof(crm));
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Busca Médico = =                                ===\n");
    printf("===                                                                         ===\n");
    printf("===                      crm:");
    scanf("%[0-9]",crm);
    getchar();
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
    return crm;
}

char* tela_medico_editar(void) {
    char* crm;

    crm = (char*) malloc(10*sizeof(crm));
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Edita Médico = =                                ===\n");
    printf("===                                                                         ===\n");
    printf("===                      crm:");
    scanf("%[0-9]",crm);
    getchar();
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
    return crm;
}

char* tela_medico_excluir(void) {
    char* crm;

    crm = (char*) malloc(10*sizeof(crm));
    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Exclui Médico = =                               ===\n");
    printf("===                                                                         ===\n");
    printf("===                      crm:");
    scanf("%[0-9]",crm);
    getchar();
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
    return crm;
}

void tela_error_medico(void){
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                Houve um erro ao acessar o arquivo                       ===\n");
    printf("===                Tente novamente!                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
}

void exibe_medico(Medico *med) {
    if (med == NULL) {
        printf("Medico não encontrado \n");
    } else {
        system("clear||cls");
        printf("=Dados do Medico= \n");
        printf("Nome: %s\n", med->nome);
        printf("crm: %s\n", med->crm);
        printf("email: %s\n", med->email);
        printf("Telefone: %s\n", med->phone);
        printf("status %d\n", med->status);
    }
    printf("Aperte <ENTER> para continuar \n");
    getchar();
}

void gravar_medico(Medico* med){
    FILE* fp;

    fp = fopen("medico.dat","ab");
    if (fp == NULL) {
         tela_error_medico();
    }
    fwrite(med, sizeof(Medico), 1, fp);
    fclose(fp);
}

void regravar_medico(Medico* med) {
    int encontrado;
    FILE* fp;
    Medico* medVisto;

    medVisto = (Medico*) malloc(sizeof(Medico));
    fp = fopen("medico.dat","r+b");
    if(fp == NULL) {
        tela_error_medico();
    }
    encontrado = False;
    while(fread(medVisto, sizeof(Medico), 1, fp) && !encontrado){
        if (strcmp(medVisto->crm, med->crm)==0){
            encontrado = True;
            fseek(fp, -1*sizeof(Medico), SEEK_CUR);
        fwrite(med, sizeof(Medico), 1, fp);
        }
    }
    fclose(fp);
    free(medVisto);
}

Medico* achar_medico(char* crm) {
    FILE* fp;
    Medico* med;

    med = (Medico*) malloc(sizeof(Medico));
    fp = fopen("medico.dat","rb");
    if (fp == NULL) {
        tela_error_medico();
    }
    while(fread(med, sizeof(Medico), 1,fp)) {
        if ((strcmp(med->crm, crm)== 0) && (med->status == True)) {
            fclose(fp);
            return med;
        }
    }
    fclose(fp);
    return NULL;
}

void lista_medicos(void){
    FILE *fp;
    Medico* med;

    med = (Medico*) malloc(sizeof(Medico));
    fp = fopen("medico.dat","rb");
    while (fread(med,sizeof(Medico),1,fp)) {
        printf("\n =Dados do Medico= \n\n");
        printf("Nome: %s\n", med->nome);
        printf("crm: %s\n", med->crm);
        printf("email: %s\n", med->email);
        printf("Telefone: %s\n", med->phone);
        printf("status %d\n\n", med->status);
    }
    printf("Aperte ENTER para continuar \n");
    getchar();
    fclose(fp);
    free(med);
}