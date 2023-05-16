//Assinaturas Módulo medico

typedef struct medico Medico;
struct medico{
    char crm[10];
    char nome[51];
    char email[51];
    char phone[10];
    int status;
};

void modulo_medico(void);
char tela_medico(void);
void tela_medico_cadastrar(void);
void tela_medico_buscar(void);
void tela_medico_editar(void);
void tela_medico_excluir(void);