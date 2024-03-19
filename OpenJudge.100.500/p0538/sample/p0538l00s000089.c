#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int a,b,c;
    
    if(scanf ("%d %d",&a,&b)==2)
    {
 
 
 
        if(a<0||a>10||b<0||b>10)
 
        {
            printf("-1\n");
        }
    else
        {
            c=a*b;
            printf("%d",c);
        }
 
    }
    else
    {
        printf("Failed to read integer.\n");
    }
    return 2;
}