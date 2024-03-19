#include <stdio.h>
int main (){

//SEÇÃO DE DECLARAÇÃO
int A;
int B;

//SEÇÃO DE COMANDOS 
scanf ("%d %d",&A,&B);

if (A>8 || B>8){
    printf (":(");
    return 0;
}

printf ("Yay!");

return 0;
}