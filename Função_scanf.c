#include <stdio.h>
int main()
{
  int ano;
  printf("Que ano voce nasceu? ");
  scanf("%d", &ano);
  printf("Voce tem %d anos.", (2022-ano));
  fflush(stdin);
  getchar();
  return 0;
}