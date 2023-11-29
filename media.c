#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
int i;
int j;
char disciplinas [3] [200];
float media [3];
float notas [3] [3];
int pesos [3];
float somaNotas = 0;
float somaNotas2 = 0;
int k;

system ("cls || clear");

 for (i = 0; i < 3; i++) {
		printf("\nDigite o nome da disciplina ");
		gets(disciplinas[i]);
            	
     for (j = 0; j < 3; j++) {

		printf("\nDigite as notas");
		scanf("%f", &notas[i][j]);

          fflush(stdin);

        for (k= 0; k< 3; k++) { 
        media[i] = (notas[i] * pesos[0] + notas[i] * pesos[1] + notas[i] * peso[2]);
        somaNotas2 += pesos[i][k];
    
       
        }

        for (i = 0; i < 3; i++) {
		printf("\nDisciplina: %s \n", disciplinas[i]);
		
		for(j = 0; j < 2; j++) {
			printf("Notas: %.1f \n", notas[i][j]);
		}
		
		printf("\nMédia: %.1f \n", media[i]);
		
		if(media[i] >= 7 ) {
			printf("Aprovado! \n");
		} else if(media[i] >= 5 ) {
			printf("Recuperação! \n");
		} else {
			printf("Reprovado! \n");
		}
	}	


 return 0;
}