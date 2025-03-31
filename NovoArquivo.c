#include <stdio.h>
int main()
{
 char nome[12];
 printf("Qual o seu nome? ");
 fgets(nome, 12, stdin);
 fflush(stdin);
 printf("Muito prazer, %s!\n", nome);
 getchar();
 return 0;
}