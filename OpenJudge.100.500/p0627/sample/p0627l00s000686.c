#include <stdio.h>
int main(){

// DECLARAÇÃO
int N,M;
int multiplicacao,soma,subtracao;
int maior;

// INSTRUÇÕES
scanf ("%d %d",&M,&N);

multiplicacao = M*N;
maior = multiplicacao;

soma = M+N;

if (soma > maior)
    maior = soma;

subtracao = M-N;
if (subtracao > maior)
    maior = subtracao;

printf ("%d",maior);

return 0;
}
