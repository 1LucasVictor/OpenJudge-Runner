#include <stdio.h>
int main (){

//SEÇÃO DE DECLARAÇÃO
int N,D;
int i;
int resposta=0;

//SEÇÃO DE COMANDOS
scanf ("%d %d",&D,&N);

if (D==0 && N!=100){
resposta = N;


    for (i=0;i<D;i++){
        resposta = resposta*100;
} }

printf ("%d\n",resposta);
return 0;
}