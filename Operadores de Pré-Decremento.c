#include <stdio.h> //biblioteca padr�o para comandos i/o
int main (void)
{
int x=10, y=5, z=0;
printf("x = %d\n\n", x);
z = --x + y;
printf("y = %d\n\n", y);
printf("z = --x + y = %d\n\n", z);
printf("x = %d\n\n", x);
getchar();
return 0;
}
