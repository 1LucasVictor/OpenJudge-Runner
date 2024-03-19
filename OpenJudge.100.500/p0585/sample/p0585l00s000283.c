#include <stdio.h>
int main()
{
    int a,b,t,s;
    scanf("%d%d%d",&a,&b,&t);
    if(a>t)
        printf("0\n");
    else
    {
        for(int i=1; a*i<=t+0.5; i++)
        {
            s=b*i;
        }
        printf("%d\n",s);
    }
    return 0;
}
