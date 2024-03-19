#include<stdio.h>
int main()
{
  int A,B;
  
  scanf("%d %d",&A,&B);
  
  
  if(A<=9 && A>=1 && B<=9 && B>=1){
    printf("%d",A*B);
  }
  
  else{
    printf("-1");
  }
  return 0;
}