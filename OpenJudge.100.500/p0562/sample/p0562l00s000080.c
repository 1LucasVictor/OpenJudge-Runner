#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,sum=1,n=0;//存储两个整数
    scanf("%d%d",&x,&y);
//采取累加的办法
    while(sum<y)
    {
      sum+=x;
      n++;
    }
  if(sum-n>=y){
   printf("%d\n",n);
  }
  else printf("%d\n",n+1);
    return 0;
}