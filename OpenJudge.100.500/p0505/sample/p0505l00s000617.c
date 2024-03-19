#include<stdio.h>
int main(void)
{
    int h,n,a,i,sum = 0;
  
    scanf("%ld %ld",&h,&n);
    for(i = 1 ; i <= n ; i++)
    {
        scanf("%ld",&a);
        h -= a;
    }
    
    if(h<=0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    return 0;
}