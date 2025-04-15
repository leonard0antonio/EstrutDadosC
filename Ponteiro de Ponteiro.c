#include <stdio.h>
int main (void)
{
int vetor[1],*v;
v = vetor;
v[0] = 123;
printf ("vetor = %d\n", vetor);
printf ("&vetor = %d\n", &vetor);
printf ("&vetor[0] = %d\n", &vetor[0]);
printf ("v = %d\n", v);
printf ("&v = %d\n", &v);
printf ("&v[0] = %d\n", &v[0]);
getchar();
return 0;
}

// //O ponteiro v é inicializado com o endereço de memória do vetor, e o valor 123 é atribuído ao primeiro elemento do vetor através do ponteiro v.
// //Os endereços de memória do vetor, do primeiro elemento do vetor e do ponteiro v são impressos na tela, mostrando que o ponteiro v aponta para o mesmo endereço de memória que o vetor.
// //O endereço de memória do ponteiro v é diferente do endereço de memória do vetor, pois o ponteiro v é uma variável separada que armazena o endereço de memória do vetor.