#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,sum=1,n=0;//存储两个整数
    scanf("%d%d",&x,&y);
//采取累加的办法
    while(sum<y)
    {
      sum+=x-1;
      ++n;
    }
    printf("%d\n",n);
    return 0;
}
