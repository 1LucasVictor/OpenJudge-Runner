#include<stdio.h>
 
int main(void)
{
 int Debt = 100000;
 int n,i;
 
 scanf("%d",&n);  
 for(i = 1; i <= n; i++)
 {
  Debt *= 1.05;
  if(Debt%1000 != 0) Debt += 1000 - (Debt%1000);
 }
 printf("%d\n",Debt);
 return 0;
}