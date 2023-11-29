#include <string.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

    setlocale(LC_ALL, "portuguese");

 char bandas [3] [200];
 char integrantes [3] [5] [200];
 int i;
 int j;

system ("cls || clear");

 for (i = 0; i < 3; i++) {
		printf("\nDigite o nome da %dº banda ", i + 1);
		gets(bandas[i]);
         
       	
     for (j = 0; j < 5; j++) {

		printf("\nDigite o %dº nome os integrantes da banda", j + 1);
		gets(integrantes[i][j]);
        }  
             
          fflush(stdin);

        }  

system ("cls || clear");

for ( i = 0; i < 3; i++)
{
  printf("banda %s \n ",bandas[i]); 


for ( j = 0; j < 5; j++)
{
  printf("\n");  
  printf(" Integrantes %s \n ",integrantes[i][j]);
  printf("\n");
 }  

}



    return 0;
}