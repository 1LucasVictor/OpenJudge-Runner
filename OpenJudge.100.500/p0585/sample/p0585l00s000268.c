#include<stdio.h>
int main()
{
  int a,b,t;
  int bis;
  int time;
  
  do{
  scanf("%d%d%d",&a,&b,&t);
  }while(a <= 1 && t >= 20);
  
  time = t + 0.5;
  bis = time / a * b;
  
  printf("%d",bis);
  
  return 0;
}