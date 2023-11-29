#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

int main () {

setlocale(LC_ALL, "portuguese");    
struct Informacao {
char nome [200];
char data_nascimento[200];
int rg; 
int cpf;
};

int i;
int k=0;
struct Informacao dado[4];


for ( i = 0; i < 5; i++)
{
    k++;
  printf("---INFORME OS DADOS DA %dº PESSOA---\n", k);

  printf("Infome seu nome:");
  gets(dado[i].nome);

  printf("Infome sua data de nascimento:");
  gets(dado[i].data_nascimento);

  printf("Infome seu RG:");
  scanf("%d",&dado[i].rg);

  printf("Infome seu CPF:");
  scanf("%d",&dado[i].cpf);

  fflush(stdin);
}

system("cls || clear");
k=0;

for ( i = 0; i < 5; i++)
{
    fflush(stdin);
    k++;
 printf("----DADOS DA %dº PESSOA----\n",k);

 printf("Seu nome\n %s",dado[i].nome);   
 printf("Sua data de nascimento\n %s",dado[i].data_nascimento);   
 printf("Seu RG\n %d",dado[i].rg);   
 printf("Seu CPF\n %d",dado[i].cpf);
 printf("\n");
}

    return 0;
}