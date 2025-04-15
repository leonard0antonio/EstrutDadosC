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


// //O código solicita ao usuário que insira seu nome, e o armazena na variável nome, que é um vetor de caracteres.
// //A função scanf lê a entrada do usuário e armazena o valor na variável nome, limitando a leitura a 20 caracteres.
