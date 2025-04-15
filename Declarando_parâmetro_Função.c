#include <stdio.h>
int f1(int y)
{
printf("Valor de y: %i",y);
return 0;
}
int main()
{
 int x=10;
 f1(x);
 return 0;
}

// //A função f1 recebe um parâmetro inteiro y, que é uma cópia do valor de x. O valor de y é impresso na tela.
// //A função main retorna 0, indicando que o programa foi executado com sucesso.
// //O valor de x não é alterado na função f1, pois a função recebe uma cópia do valor de x, e não o endereço de memória de x.