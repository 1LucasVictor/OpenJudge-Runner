#include<stdio.h>
 
int main(void){
 int A=0,B=0,C=0,count=0;
  scanf("%d %d %d",&A,&B,&C);
  if(A==7||A==5)
    count+=A;
  if(B==7||B==5)
    count+=B;
  if(C==7||C==5)
    count+=C;
  
  if(count==17)
    printf("YES");
  else
    printf("NO");
  
  return 0;
}