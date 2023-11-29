#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <lolcale.h>

int main () {

struct Informacao {
char nome [200]
int data_nascimento;
int rg; 
int cpf;
}

int i;
int k=0;

struct informacao dados[4]
for ( i = 0; i < 5; i++)
{
    k++;
  printf("---INFORME OS DADOS DA %dº PESSOA---", k);

  print("Infome seu nome:");
  gets(dados[i].nome);

  print("Infome sua data de nascimento:");
  scanf("%d",&dados[i].data_nascimento);

  print("Infome seu RG:");
  scanf("%d",&dados[i].rg);

  print("Infome seu CPF:");
  scanf("%d",&dados[i].cpf);
}

system ("cls || clear");
k=0;

for ( i = 0; i < 5; i++)
{
    k++;
 printf("----DADOS DA %dº PESSOA----",k);

 printf("Seu nome\n %s",dados[i].nome));   
 printf("Sua data de nascimento\n %d",dados[i].data_nascimento);   
 printf("Seu RG\n %d",dados[i].rg);   
  printf("Seu CPF\n %d",dados[i].cpf);
}

    return 0;
}