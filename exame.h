//Assinatura Módulo exame

typedef struct exame Exame;
struct exame {
  int id_exame;
  char crm[10];
  char cpf[12];
  char datahora[15];
  int status;
};

void modulo_exame(void);
char tela_exame(void);
void tela_exame_cadastrar(void);
void tela_exame_buscar(void);
void tela_exame_editar(void);
void tela_exame_excluir(void);