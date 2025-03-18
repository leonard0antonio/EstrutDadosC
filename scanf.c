#include <stdio.h>
int main()
{
 char nome[20];
 printf("Qual o seu nome? ");
 scanf("%20[^\n]", &nome);
 fflush(stdin);
 printf("Muito prazer, %s!\n", nome);
 getchar();
 return 0;
}