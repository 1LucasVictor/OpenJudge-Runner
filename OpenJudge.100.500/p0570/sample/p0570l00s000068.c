#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c=0;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        for(int i=a;i>0;i--)
        {
            if(abs(a-i)==abs(b-i))
            {
                c=i;
            }
        }
    }
    else if(a<b)
    {
        for(int j=b;j>0;j--)
        {
            if(abs(a-j)==abs(b-j))
            {
                c=j;
            }
        }
    }
    if(c==0)
        printf("IMPOSSIBLE");
    else
        printf("%d",c);
}
