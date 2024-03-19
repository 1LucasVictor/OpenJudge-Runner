#include<stdio.h>
int main (void)
{
    int a,b,c,k,i;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&k);
    if(a>k){
        printf("%d\n",k);
    }else if(a+b>k)
    {
        printf("%d\n",a);
    }
    else
    {
        printf("%d\n",a-(k-a-b));
    }
    
}