#include<stdio.h>
int main(void)
{
    int a,b,c,i,j;
    scanf("%d %d %d",&a,&b,&c);
    j=0;
    for(i=a;i<=b;i++)
    {
        if(c%i==0)
         j++;
    }
    printf("%d\n",j);
    return 0;
}
 