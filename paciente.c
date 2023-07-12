#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "paciente.h"
#include "verifica.h"

void modulo_paciente(void) {
    char opcao;
    do{
        opcao = tela_paciente();
        switch(opcao){
            case '1': paciente_cadastrar();
                      break;
            case '2': paciente_buscar();
                      break;
            case '3': paciente_editar();
                      break;
            case '4': paciente_excluir();
                      break;        
        }
    }while (opcao != '0');
}

void paciente_cadastrar(void){
    Paciente *pac;

    pac = tela_paciente_cadastrar();
    gravar_paciente(pac);
    free(pac);
}

void paciente_buscar(void) {
    Paciente* pac;
    char* cpf;

    cpf = tela_paciente_buscar();
    pac = achar_paciente(cpf);
    exibe_paciente(pac);
    free(pac);
    free(cpf);
}

void paciente_editar(void) {
    Paciente* pac;
    char* cpf;

    cpf = tela_paciente_editar();
    pac = achar_paciente(cpf);
    if (pac == NULL){
        printf("Ocorreu um erro \n");
        printf("Paciente não encontrado\n");
    } else {
        pac = tela_paciente_cadastrar();
        strcpy(pac->cpf, cpf);
        editar_paciente(pac);
        free(pac);
    }
    free(cpf);
}

void paciente_excluir(void) {
    Paciente* pac;
    char *cpf;

    cpf = tela_paciente_excluir();
    pac = (Paciente*) malloc(sizeof(Paciente));
    pac = achar_paciente(cpf);
    if (pac == NULL) {
        printf("Paciente inexistente \n");
    } else { 
        pac->status = 0;
        editar_paciente(pac);
        free(pac);
    }
    free(cpf);
}

char tela_paciente(void) {
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
    return op;
}

void tela_error(void){
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                Houve um erro ao acessar o arquivo                       ===\n");
    printf("===                Tente novamente!                                         ===\n");
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
}

Paciente* tela_paciente_cadastrar(void) {
    Paciente *pac;
     pac = (Paciente*) malloc(sizeof(Paciente));

    system("clear||cls");
    printf("===============================================================================\n");
    printf("===                                                                         ===\n");
    printf("===                    = =  Cadastra paciente = =                           ===\n");
    printf("===                                                                         ===\n");
    printf("===                     Nome Completo:");
    scanf("%[A-ZÁÃÂÉẼÊÍĨÎÓÕÔ a-záãâéẽêíĩîóõô]",pac->nome);
    getchar();
    printf("===                     CPF:");
    scanf("%[0-9]",pac->cpf);
    getchar();
    printf("===                     E-mail:");
    scanf("%[A-Za-z@._0-9]",pac->email);
    getchar();
    printf("===                     Número de contato:");
    scanf("%[0-9]",pac->phone);
    getchar();
    pac->status = 1;
    printf("===                                                                         ===\n");
    printf("===============================================================================\n");
    printf("\n");
    printf("Aperte <ENTER> para continuar");
    getchar();
    return pac;
}

char* tela_paciente_buscar(void) {
    char* cpf;

    cpf = (char*) malloc(12*sizeof(cpf));
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
    return cpf;
}

char* tela_paciente_editar(void) {
    char* cpf;

    cpf = (char*) malloc(12*sizeof(cpf));
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
    return cpf;
}

char* tela_paciente_excluir(void) {
    char* cpf;

    cpf = (char*) malloc(12*sizeof(cpf));
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
    return cpf;
}

void gravar_paciente(Paciente* pac){
    FILE* fp;

    fp = fopen("paciente.dat","ab");
    if (fp == NULL) {
         tela_error();
    }
    fwrite(pac, sizeof(Paciente), 1, fp);
    fclose(fp);
}

Paciente* achar_paciente(char* cpf) {
    FILE* fp;
    Paciente* pac;

    pac = (Paciente*) malloc(sizeof(Paciente));
    fp = fopen("paciente.dat","rb");
    if (fp == NULL) {
        tela_error();
    }
    while(fread(pac, sizeof(Paciente), 1,fp)) {
        if ((strcmp(pac->cpf, cpf)== 0) && (pac->status == True)) {
            fclose(fp);
            return pac;
        }
    }
    fclose(fp);
    return NULL;
}

void exibe_paciente(Paciente *pac) {
    if (pac == NULL) {
        printf("Paciente não encontrado \n");
    } else {
        system("clear||cls");
        printf("=Dados do Paciente= \n");
        printf("Nome: %s\n", pac->nome);
        printf("CPF: %s\n", pac->cpf);
        printf("email: %s\n", pac->email);
        printf("Telefone: %s\n", pac->phone);
        printf("status %d\n", pac->status);
    }
    printf("Aperte ENTER para continuar \n");
    getchar();
}

void editar_paciente(Paciente* pac) {
    int encontrado;
    FILE* fp;
    Paciente* pacVisto;

    pacVisto = (Paciente*) malloc(sizeof(Paciente));
    fp = fopen("paciente.dat","r+b");
    if(fp == NULL) {
        tela_error();
    }
    encontrado = False;
    while(fread(pacVisto, sizeof(Paciente), 1, fp) && !encontrado){
        if (strcmp(pacVisto->cpf, pac->cpf)==0){
            encontrado = True;
            fseek(fp, -1*sizeof(Paciente), SEEK_CUR);
            fwrite(pac, sizeof(Paciente), 1, fp);
        }
    }
    fclose(fp);
    free(pacVisto);
}

void lista_pacientes(void){
    FILE *fp;
    Paciente* pac;

    pac = (Paciente*) malloc(sizeof(Paciente));
    fp = fopen("paciente.dat","rb");
    while (fread(pac,sizeof(Paciente),1,fp)) {
        printf("\n =Dados do Paciente= \n\n");
        printf("Nome: %s\n", pac->nome);
        printf("CPF: %s\n", pac->cpf);
        printf("email: %s\n", pac->email);
        printf("Telefone: %s\n", pac->phone);
        printf("status %d\n\n", pac->status);
    }
    printf("Aperte ENTER para continuar \n");
    getchar();
    fclose(fp);
    free(pac);
}