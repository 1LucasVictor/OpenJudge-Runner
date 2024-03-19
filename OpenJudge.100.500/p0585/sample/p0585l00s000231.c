#include<stdio.h>
int main()
{
    int a,b,mb,t,loop;
    float dt;
    scanf("%d %d %d",&a,&b,&t);
    dt=t+0.5;
     loop= dt/a;
    printf("%d",loop*b);
}
