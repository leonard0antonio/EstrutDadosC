//Ex1: Utilizando vetor, desenvolva um programa que solicite o número do mês e
//mostre a quantidade de dias que ele possui.

#include <stdio.h>
int main(void)
{
int meses[12] = {31,28,31,30,31,30,31,31,30,31,30,31}, mes=0;
printf("Informe o numero do mes: ");
scanf("%i",&mes);
printf(" O mes %i possui %i dias.\n ",mes, meses[mes-1]);
getchar();
return 0;
}

//Ex1: Utilizando vetor, desenvolva um programa que solicite o número do mês e
//mostre a quantidade de dias que ele possui.

#include <stdio.h>
int main(void)
{
int meses[12] = {31,28,31,30,31,30,31,31,30,31,30,31}, mes=0;
printf("Informe o numero do mes: ");
scanf("%i",&mes);
printf(" O mes %i possui %i dias.\n ",mes, meses[mes-1]);
getchar();
return 0;
}