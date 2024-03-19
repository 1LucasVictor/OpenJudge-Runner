#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,n,a,b,c,d,e,f,g,h,j,x;
    scanf("%d",&n);
    if(n<101 && n>0)
    {
    for(i=1;i<=9;i++)
    {
        a=i*1;
        b=i*2;
        c=i*3;
        d=i*4;
        e=i*5;
        f=i*6;
        g=i*7;
        h=i*8;
        j=i*9;
        if(a==n||b==n||c==n||d==n||e==n||f==n||g==n||h==n||j==n)
        {
            x=1;
        }
    }
    if(x==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    }
    return 0;
}
