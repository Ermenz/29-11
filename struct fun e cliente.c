#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {

setlocale(LC_ALL,"portuguese");

struct Dados {
char nome[200];
char cpf[200];
char admissao[200];
char matricula[200];
char endereco[200];
char nascimento[200];
};

int i;
int j;
int k = 0;

struct Dados funcionario[3];

for ( i = 0; i < 3; i++)
{
    k++;
    printf("---Informe os dados do %d� funcion�rio---\n", k);
    printf("Nome do funcion�rio\n");
    gets(funcionario[i].nome);

    printf("Data da admiss�o\n");
    gets(funcionario[i].admissao);

    fflush(stdin);
   printf("Matr�cula do funcion�rio\n");
    gets(funcionario[i].matricula);

    printf("Endere�o do funcion�rio\n");
    gets(funcionario[i].endereco);
}

system ("clear||cls");

struct Dados cliente[3];

k = 0;
for ( j = 0; j < 3; j++)
{
    k++;
    printf("---Informe os dados do %d�cliente---\n", k);

    printf("Nome do cliente\n");
    gets(cliente[j].nome);

    printf("Data do nascimento\n");
    gets(cliente[j].nascimento);

    fflush(stdin);
   printf("Endere�o do cliente\n");
    gets(cliente[j].endereco);
    printf("\n");
}

k=0;

printf("EXIBINDO DADOS DO FUNCION�RIO\n");

for ( i = 0; i < 3; i++) {

    k++;
    printf("---Dados do %d� funcion�rio---\n",k);

    printf("Nome do funcion�rio: %s\n", funcionario[i].nome);
    printf("Data de admiss�o do funcion�rio: %s\n", funcionario[i].admissao);
    printf("Matricula do funcion�rio: %s\n", funcionario[i].matricula);
    printf("Endere�o do funcion�rio: %s\n", funcionario[i].endereco);
    printf("\n");
    }

    k=0;

    printf("EXIBINDO DADOS DO CLIENTE\n");

     for ( j = 0; j < 3; j++) {

    k++;
    printf("---Dados do %d� cliente---\n", k);

    printf("Nome do cliente: %s\n", cliente[j].nome);
    printf("Data de Nascimento do cliente: %s\n", cliente[j].nascimento);
    printf("Endere�o do cliente: %s\n", cliente[j].endereco);
    printf("\n");

     }

    return 0;
}