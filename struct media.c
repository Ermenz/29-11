#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

int main () {

setlocale(LC_ALL, "portuguese");

struct informacao
{
 float nota[2];
 int idade;
 char nome [200];
 float media;
};

int i;
int j;
int k;
float somaNota =0;
struct informacao dados[3];

for ( i = 0; i < 3; i++)
{
    printf("Informe seu nome");
    gets(dados[i].nome);

   printf("Informe sua idade");
    scanf("%d",&dados[i].idade);

    for ( j = 0; j < 2; j++) {
     printf("Informe nota");
     scanf("%f",&dados[i].nota[j]);
     somaNota+= dados[i].nota[j];
    }
    dados[i].media = somaNota/j;
    somaNota = 0;
    fflush (stdin);
}


k = 0;

  for ( i = 0; i < 3; i++) {
    k++;
    printf("---Dados do %dº aluno---\n", k);
    printf("Nome do livro: %s\n", dados[i].nome);
    printf("Idade do aluno: %d\n", dados[i].idade);
     for ( j = 0; j < 2; j++) {
    printf("Nota do aluno: %.2f\n", dados[i].nota[j]);
     }
    printf("Media do aluno: %.2f\n", dados[i].media);
    printf("\n");
    }









    return 0;
}



