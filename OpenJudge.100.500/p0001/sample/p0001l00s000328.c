#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,ret;
    while((ret=scanf("%d%d",&a,&b))!=EOF)
    {
        int i=0;
        while(++i)
        {
            if(pow(10,i)>a+b) break;
        }
        printf("%d\n",i);
    }
    return 0;
}

