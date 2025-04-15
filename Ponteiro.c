//O Ponteiro ou Apontador, é uma variável que armazena endereços de memória.
#include <stdio.h>
int verifica(int n1, int n2, int *soma, int *produto);
int main()
{
 int n1 = 10, n2 = 10, s = 0, p = 0;
 printf("Valor de Retorno: %i\n\n",verifica(n1,n2,&s,&p));
 printf("Soma = %i\n\n",s);
 printf("Produto = %i\n\n",p);
 getchar();
 return 0;
}
int verifica(int n1, int n2, int *soma, int *produto)
{
 printf("N1: %i\n\n",n1);
 printf("N2: %i\n\n",n2);
 *soma = (n1 + n2);
 *produto = (n1 * n2);
 if (n1==n2)
 return 0;
 else
 if (n1>n2)
 return 1;
 else
 return 2;
}

//O ponteiro é utilizado para passar o endereço de memória das variáveis soma e produto
//para a função verifica, permitindo que a função altere os valores dessas variáveis diretamente.
//A função verifica retorna um valor inteiro que indica a relação entre n1 e n2, e os valores de soma e produto são atualizados na função main.