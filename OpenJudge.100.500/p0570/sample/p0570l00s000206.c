#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,n;
    scanf("%d %d",&x,&y);
    n = (x+y)/2;
    if (sqrt(pow(x-n,2))!=sqrt(pow(y-n,2)))
    {
        printf("IMPOSSIBLE");
    }
    else
    {
        printf("%d",n);
    }
    
   
}