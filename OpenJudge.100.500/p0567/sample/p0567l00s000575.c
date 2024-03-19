#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if(B>=1&&B<=20&&A>=B&&A<=20&&C>=1&&C<=20)
    {
        int a,b;
        a=A-B;
        b=C-a;
        if(b<=0)
        {
            printf("0\n");
        }
        else
        {
            printf("%d",b);
        }

    }
}
