#include<stdio.h>
int main()
{
    int A,B,T,i,bis;
    float act;
    while(scanf("%d %d %d",&A,&B,&T)!=EOF)
    {
        act=T+0.5;
        bis=0;
        for(i=A;i<=act;i+=A)
        {
            bis+=B;
        }
        printf("%d\n",bis);
    }
    return 0;
}