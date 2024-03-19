#include <stdio.h>
int main (){

//SEÇÃO DE DECLARAÇÃO
int N,D;
int i;


//SEÇÃO DE COMANDOS
scanf ("%d %d",&D,&N);

int resposta = N;

for (i=0;i<D;i++){
resposta = resposta*100;
}

printf ("%d\n",resposta);
return 0;
}