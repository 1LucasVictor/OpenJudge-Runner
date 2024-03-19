#include<stdio.h>
int main()
{
    int a,b,x,y,z,i;
    scanf("%d",&a);
    x=a%2;
    y=a/2;
    if(x==0)
    {
        printf("%d\n",y);
    }
    else
        printf("%d\n",y+1);


    return 0;
}
