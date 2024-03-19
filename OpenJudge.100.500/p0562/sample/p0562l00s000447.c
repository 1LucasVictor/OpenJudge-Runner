#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,min,n=1;//存储两个整数
    scanf("%d%d",&x,&y);
//采取穷举的办法 n*x-(x-1)>=y那么穷举成功 另min=n
    while(n)
    {
        if(n*(x-1)+1>=y)
        {
            min=n;
            break;
        }
        n++;
    }
    printf("%d\n",min);
    return 0;
}
