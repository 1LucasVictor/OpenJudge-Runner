#include <stdio.h>
int main(void){
    int A,B,T,a;
    scanf("%d %d %d",&A,&B,&T);
    int answer=0;
    int t=T+0.5;
    a=+t/A;
   answer=answer+B*a;
    printf("%d",answer);
  
}
