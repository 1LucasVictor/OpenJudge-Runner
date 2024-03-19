#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

int main()
{
    int n, i,q, r;
    scanf("%d", &n);
    for (i = 1; i <= 9;i++)
    {
        if((r=n%i)==0)
        {
            if((q=n/i)>=1&&q<=9)
            {
                printf("Yes");
                return 0;
            }
        }
    }
    printf("No");

    return 0;
}