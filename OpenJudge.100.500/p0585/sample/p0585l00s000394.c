#include<stdio.h>
int main()
{
  int a,b,t;
  int bis;
  int time;
  
  scanf("%d%d%d",&a,&b,&t);

  time = t + 0.5;
  bis = time / a * b;
  
  printf("%d",bis);
  
  return 0;
}