#include<stdio.h>
int main(void)
{
    int a,b,c,d,e,k,n,m,x,y,z,t;
    n=0;

    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);

    z=a-b;
    y=b-c;
    x=c-d;
    t=d-e;
    if(z > k || y > k || x > k || t > k)
    printf(":(");

    else printf("Yay!");

    return 0;

}
