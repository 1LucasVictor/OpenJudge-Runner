#include <stdio.h>

int main()
{
    int a,b,c,d,count[4],k;
    
    k=0;
    scanf("%d",&a);
    b=a%10;
    c=(a%100-b)/10;
    d=a/100;
    count[0]=b;
    count[1]=c;
    count[2]=d;
    for(int i=0;i<=3;i++)
    {
    if(count[i]==1)
    {
        k++;
    }
    }
    printf("%d",k);
}