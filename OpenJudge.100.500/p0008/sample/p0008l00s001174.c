#include<stdio.h>
 
int main(void)
{
 int i,j,cnt,n;
 while(scanf("%d",&n)!=EOF)
 {
  cnt = 0;
  for(i = 2; i <= n; i++)
  {
   for(j = 2; j < i; j++)
   {
    if(i%j == 0) break;
   }
   if(i == j) cnt++;
  }
  printf("%d\n",cnt);
 } 
 return 0;
}