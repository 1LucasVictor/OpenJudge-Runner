#include<stdio.h>

int main()
{
    
    int n,a,b;
    
    scanf("%d %d %d",&n,&a,&b);
    
    if(b < n*a)
        printf("%d",b);
    else
        printf("%d",n*a);
}
