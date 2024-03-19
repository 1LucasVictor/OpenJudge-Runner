#include<stdio.h>
int main (){
int N,A,B,purna;
scanf("%d %d %d", &N,&A,&B);
purna=N*A;
if (purna>B)
    printf("%d",B);
else
    printf("%d",purna);
return 0;

}
