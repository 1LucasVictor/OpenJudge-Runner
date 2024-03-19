#include<stdio.h>
int main()
{
    int N,A,B;
    scanf("%d%d%d",&N,&A,&B);
    if(N>=1&&N<=20&&A>=1&&A<=50&&B>=1&&B<=50)
    {
        int a;
        a=N*A;
        if(a<B)
        {
            printf("%d\n",a);
        }
        if(a>B)
        {
            printf("%d\n",B);
        }
    }
}
