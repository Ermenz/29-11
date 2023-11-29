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
    printf("---Informe os dados do %dº funcionário---\n", k);
    printf("Nome do funcionário\n");
    gets(funcionario[i].nome);

    printf("Data da admissão\n");
    gets(funcionario[i].admissao);

    fflush(stdin);
   printf("Matrícula do funcionário\n");
    gets(funcionario[i].matricula);

    printf("Endereço do funcionário\n");
    gets(funcionario[i].endereco);
}

system ("clear||cls");

struct Dados cliente[3];

k = 0;
for ( j = 0; j < 3; j++)
{
    k++;
    printf("---Informe os dados do %dºcliente---\n", k);

    printf("Nome do cliente\n");
    gets(cliente[j].nome);

    printf("Data do nascimento\n");
    gets(cliente[j].nascimento);

    fflush(stdin);
   printf("Endereço do cliente\n");
    gets(cliente[j].endereco);
    printf("\n");
}

k=0;

printf("EXIBINDO DADOS DO FUNCIONÁRIO\n");

for ( i = 0; i < 3; i++) {

    k++;
    printf("---Dados do %dº funcionário---\n",k);

    printf("Nome do funcionário: %s\n", funcionario[i].nome);
    printf("Data de admissão do funcionário: %s\n", funcionario[i].admissao);
    printf("Matricula do funcionário: %s\n", funcionario[i].matricula);
    printf("Endereço do funcionário: %s\n", funcionario[i].endereco);
    printf("\n");
    }

    k=0;

    printf("EXIBINDO DADOS DO CLIENTE\n");

     for ( j = 0; j < 3; j++) {

    k++;
    printf("---Dados do %dº cliente---\n", k);

    printf("Nome do cliente: %s\n", cliente[j].nome);
    printf("Data de Nascimento do cliente: %s\n", cliente[j].nascimento);
    printf("Endereço do cliente: %s\n", cliente[j].endereco);
    printf("\n");

     }

    return 0;
}