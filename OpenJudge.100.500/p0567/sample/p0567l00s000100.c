#include <stdio.h>
int main (void){
int A,B,C;
scanf("%d%d%d",&A,&B,&C);
if(A>=B+C){
    printf("0");
}else{
    printf("%d",C-A+B);
}
}