//Assinaturas Módulo paciente

typedef struct paciente Paciente;
struct paciente{
    char cpf[12];
    char nome[51];
    char email[51];
    char phone[10];
    int status;
};


void modulo_paciente(void);
char tela_paciente(void);
Paciente* tela_paciente_cadastrar(void);
void tela_paciente_buscar(void);
void tela_paciente_editar(void);
void tela_paciente_excluir(void);