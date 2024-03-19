#include <stdio.h>
int main (){

//SEÇÃO DE DECLARAÇÃO
int N,D;
int i;

//SEÇÃO DE COMANDOS 

scanf ("%d %d",&D,&N);

int resposta = N;



if (N==100){
    if (D==0){
        printf ("%d\n",resposta+1); 
        return 0;
    }

    if (D==1){
        printf ("%d\n",resposta);
        return 0;
    }

    if (D==2){
        printf ("10099\n");
    }
}


for (i=0;i<D;i++){
    resposta=resposta*100;
}

printf ("%d\n",resposta);

return 0;}