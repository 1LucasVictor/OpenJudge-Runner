#include <stdio.h>
int main (void){
int N,A,B;
scanf("%d%d%d",&N,&A,&B);
if(B>=N*A){
    printf("%d",N*A);
}else{
    printf("%d",B);
}
}