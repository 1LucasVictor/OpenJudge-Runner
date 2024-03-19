#include <stdio.h>

int main() 
{
    int sum,x;
    while(scanf("%d",&x)==1&&x!=0)
    {
        sum = 0;
        while(x > 0)
        {
            sum += x % 10;
            x /= 10;
        }
        printf("%d\n",sum);
    }
    return 0;
}
