#include <stdio.h> //biblioteca padr�o para comandos i/o
#include <math.h> //necess�rio para o "fmod"
int main (void)
{
int a=10, b=3;
float c=10, d = 3.0;
printf("(Incremento) => ++a = %d \n", ++a);
printf("(Decremento) => --a = %d \n", --a);
printf("(Multiplicacao) => %d * %d = %d \n", a, b, a * b);
printf("(divisao) => %d / %d = %d \n", a, b, a / b);
printf("(resto com reais) => fmod(%.1f,%.1f) = %.1f\n", c, d, fmod(c,d));
printf("(subtracao) => %d - %d = %d \n", a, b, a - b);
printf("(adicao) => %d + %d = %d \n", a, b, a + b);
printf("(resto) => %d %% %d = %d \n", a, b, a % b);
getchar();
return 0;
}