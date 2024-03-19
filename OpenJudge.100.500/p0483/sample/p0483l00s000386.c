#include<stdio.h>
int main()
{
  int n,i;
  int t=0;
  scanf("%d",&n);
  for(i=1;i<4;i++)
  {
      if((n%10)==7)
       {t=1;
        break;}
        n=n/10;
  }
  (t==1)?printf("Yes"):printf("No");
return 0;}
