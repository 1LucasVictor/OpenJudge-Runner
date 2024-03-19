#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, k;
    scanf("%d %d", &a, &b);
    if((a+b)%2==1)
    {
        printf("IMPOSSIBLE");
        //return 0;
    }
    else 
    {
        printf("%d",(a + b) / 2);
    }
    return 0;
}