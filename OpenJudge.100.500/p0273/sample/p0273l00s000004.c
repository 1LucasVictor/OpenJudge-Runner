#include<stdio.h>

int main(void){

 int a,i,F[45];

  scanf("%d",&a);
  F[0] = 1;
  F[1] = 1;

   for(i=2;i<=44;i++){
    F[i] = F[i-2] + F[i-1];
   }
  printf("%d\n",F[a]); 
  return 0;
}