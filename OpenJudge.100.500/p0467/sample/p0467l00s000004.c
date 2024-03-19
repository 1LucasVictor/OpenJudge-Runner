#include <stdio.h>
#include <string.h>
int main(){
 int A,B,C,K;
 scanf("%d %d %d %d",&A,&B,&C,&K);
 if(K<=A)printf("%d",K);
  else if(K<=A+B)printf("%d",A); 
   else printf("%d",2*A-K+B);
 return 0;
}