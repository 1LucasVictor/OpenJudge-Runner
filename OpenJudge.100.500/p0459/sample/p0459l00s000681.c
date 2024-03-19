#include <stdio.h>

int main (void)
{
    
    int X,Y,t;
    scanf("%d",&Y);
    scanf("%d",&X);
    t=(4*Y-X)/2;
    if(Y-t>=0&&t>=0&&X%2==0)
    {
        puts("Yes");
    }else{
        puts("No");
    }
    return 0;
}
