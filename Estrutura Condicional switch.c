#include <stdio.h>
#include <locale.h>
int main()
{
 int numero;
 setlocale(LC_ALL,"portuguese");
 printf("Informe um n�mero entre 1 e 3: ");
 scanf("%d",&numero);
 switch (numero)
 {
 case 1:
 printf("Voc� digitou o 1.");
break;
 case 2:
 printf("Voc� digitou o 2.");
break;
 case 3:
 	
 printf("Voc� digitou o 3.");
break;
 default:
 printf("Voc� digitou um n�mero inv�lido.");
break;
 }
 getchar();
 return 0;
}