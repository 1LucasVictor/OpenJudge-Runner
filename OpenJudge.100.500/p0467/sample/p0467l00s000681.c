#include<stdio.h>

int main()
{
    int a,b,c,k,d=0,A,B,C,SUM;
    scanf("%d %d %d %d",&a,&b,&c,&k);
    A=a;
    B=b;
    C=c;
    while(d<k)
    {
        d++;
        if(a>0)
        {
            a--;
        }
        else if(a==0&&b>0)
        {
            b--;
        }
        else if(a==0&&b==0&&c>0)
        {
            c--;
        }
    }
    SUM=(1*(A-a))+(0*(B-b))+(-1*(C-c));
    printf("%d",SUM);

}