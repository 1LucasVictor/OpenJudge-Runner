#include<stdio.h>
 
int main()
{
 int num[10]; 
 int i = 0;
 int n;
 while(scanf("%d",&n) != EOF)
 {
  if(n == 0)
  {
   printf("%d\n",num[i-1]);
   i -= 2;
  }else num[i] = n;
  i++;
 }
 return 0;
}