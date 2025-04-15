#include <stdio.h>
int main()
{
 double a=1,b=2,c=3,d=4,res=0;
 res = c * (++d - a) / (--b + 1);
 printf("O valor de res = %.f\n",res);
 return 0;
}


// //A expressão c * (++d - a) / (--b + 1) é avaliada seguindo a precedência dos operadores aritméticos e de incremento/decremento.
// //Os operadores de incremento e decremento têm precedência sobre os operadores aritméticos, e os operadores de multiplicação e divisão têm precedência sobre a adição e subtração.