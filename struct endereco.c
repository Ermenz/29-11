#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

int main () {

setlocale(LC_ALL, "portuguese");


//(.........Variável Struct..........)
struct Informativo {
char nome[200];
char autor [200];
char categoria[200];
float preco;
};

int i;
int k = 0;
struct Informativo dados[4];

//(........Recebimento de dados pelo struct........)
for ( i = 0; i < 3; i++) {

   k++;
   printf("------Informe o %dº livro-----\n", k );

   printf("Digite o nome do livro:");
   gets(dados[i].nome);

   printf("Digite o nome do Autor:");
   gets(dados[i].autor);

   printf("Digite a categoria do livro:");
   gets(dados[i].categoria);

   printf("Digite o preco do livro:");
   scanf("%f", &dados[i].preco);
   fflush(stdin);
}

system ("cls || clear");
k = 0;

// (..........Saída de dados........)
   for ( i = 0; i < 3; i++) {

    k++;
    printf("---Dados do %dº livro---\n", k);
    printf("Nome do livro: %s\n", dados[i].nome);
    printf("Autor do livro: %s\n", dados[i].autor);
    printf("Categoria do livro: %s\n", dados[i].categoria);
    printf("Preço do livro: %.2f\n", dados[i].preco);
    printf("\n");
    }



    return 0;
}