#include<stdio.h>
int main()
{
  int a,b=0,c;
  
  scanf("%d",&a);
  c=a/2;
  
  if(a%2 != 0 ){
   c=c+1;
  }
  
  printf("%d\n",c);
  
  return 0;
}