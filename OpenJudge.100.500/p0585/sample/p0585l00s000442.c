#include<stdio.h>
int main()
{
    int a,b,mb,t,loop;
    float dt;
    scanf("%d %d %d",&a,&b,&t);
    dt=t+0.5;
     loop=dt/a;

    if(a<t&&b<t)
    {
        printf("%d",loop*b);
    }
    else
    {
        printf("0");
    }
}
