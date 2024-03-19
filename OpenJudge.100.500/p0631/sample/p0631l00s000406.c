#include<stdio.h>
int main()
{
  int A,B,X;
  scanf("%d%d%d",&A,&B,&X);
  if(A>X)
  {
    printf("NO\n");
  }
  else if(A+B>=X)
  {
    printf("YES\n");
  }else{
    printf("No\n");
  }
  return 0;
}
  
