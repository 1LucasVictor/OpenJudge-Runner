#include<stdio.h>
int main()
{
    int a,b,c=0,s=0;
    scanf("%d%d",&a,&b);
    if(b==1)
    {
        printf("0\n");
        return 0;
    }
    while(s<=b)
    {
        s+=(a-1);
        c++;
        if(s+1>=b)
            break;
    }
    printf("%d\n",c);
    return 0;
}
