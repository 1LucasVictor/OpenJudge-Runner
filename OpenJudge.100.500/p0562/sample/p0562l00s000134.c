#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,sum=1,n=1;//存储两个整数
    scanf("%d%d",&x,&y);
//采取累加的办法
    while(n)
    {
       if(sum<y)
        {
            sum+=n*x;
        }
        else{break;}
        n++;
    }
    printf("%d\n",n);
    return 0;
}
