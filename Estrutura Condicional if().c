#include <stdio.h>
int x=0, y=0;
int main()
{
 printf("Informe o valor 1: ");
 scanf("%i",&x);
 printf("Informe o valor 2: ");
 scanf("%i",&y);
 if (x > y)
 printf("Maior valor: %i\n",x);
 else
 printf("Maior valor: %i\n",y);
 return 0;
}