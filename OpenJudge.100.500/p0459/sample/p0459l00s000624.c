#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, b, c;
    scanf("%d %d",&a ,&b);
    // if ( (b/a == 2 || b/a == 4) && (b%a == 2 || b%a == 4 || b%a == 0))
    // {
    //     printf("Yes");
    // }
    // else
    // {
    //     printf("No");
    // }
    if ( (b-(a*4))%2 == 0 && ((b-(a*4))/2) < a )
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }


    return 0;
}