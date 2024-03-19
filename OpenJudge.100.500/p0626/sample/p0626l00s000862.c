#include<stdio.h>

int main(void)
{
  int d,n;
  scanf("%d%d",&d,&n);

  if(d==0)
    printf("%d\n",n);
  if(d==1)
    printf("%d\n",100*n);
  if(d==2)
    printf("%d\n",10000*n);

  return 0;
}