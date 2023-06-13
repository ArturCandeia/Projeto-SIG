//Assinatura Módulo exame

typedef struct exame Exame;
struct exame {
  char id_exame[12];
  char crm[10];
  char cpf[12];
  char horario[6];
  char datahora[15];
  int status;
};

void modulo_exame(void);
char tela_exame(void);
Exame *tela_exame_cadastrar(void);
char* tela_exame_buscar(void);
char* tela_exame_editar(void);
char* tela_exame_excluir(void);
Exame* achar_exame(char*);
void exame_cadastrar(void);
void exame_buscar(void);
void exame_editar(void);
void exame_excluir(void);
void gravar_exame(Exame*);
void regravar_exame(Exame*);
void exibe_exame(Exame*);
void tela_error_exame(void);
void lista_exames(void);