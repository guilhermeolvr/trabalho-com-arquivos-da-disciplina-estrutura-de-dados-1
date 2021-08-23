struct agenda
{
	char nome[60], telefone[16],celular[16];
	int tam;
} agenda;

void cadastro(struct agenda pt[]);
void statusagenda(struct agenda pt[]);
void alterarcontato(struct agenda pt[]);
void pesquisarcontato(struct agenda pt[]);
void exibircontato(struct agenda pt[]);
void excluircontato(struct agenda pt[]);

