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
void tela_error(void);
Paciente* tela_paciente_cadastrar(void);
char* tela_paciente_buscar(void);
char* tela_paciente_editar(void);
char* tela_paciente_excluir(void);
void paciente_cadastrar(void);
void gravar_paciente(Paciente*);
Paciente* achar_paciente(char*);
void exibe_paciente(Paciente*);
void regravar_paciente(Paciente*);
void paciente_buscar(void);
void paciente_editar(void);
void paciente_excluir(void);
void lista_pacientes(void);