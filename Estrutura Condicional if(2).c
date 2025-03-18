{
float nota1=0, nota2=0, media=0;
 printf("Informe a nota 1: ");
 scanf("%f",&nota1);
 printf("Informe a nota 2: ");
 scanf("%f",&nota2);
 media = (nota1+nota2)/2;
 if (media < 5)
 printf("Reprovado!");
 else if (media < 7)
 printf("Recuperacao!");
 else
 printf("Aprovado!");
 return 0;
}