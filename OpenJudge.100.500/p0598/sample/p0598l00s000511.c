#include<stdio.h>
int main()
{
  int  A,B;
  scanf("%d %d",&A,&B);
  if(B%A==0){
    A=A+B;
    printf("%d",A);
  }
  else {
    B=B-A;
    printf("%d",B);
  }

  return 0;
}
