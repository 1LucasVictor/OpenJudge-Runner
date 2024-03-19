#include<stdio.h>
int main()
{
    int n,j2, j=0,count = 0;
    scanf("%d",&n);

    while(n != 0)
    {
        j2=n%10;
        if(j2==7)
        {
            count++;
            break;
        }
        else
        {
            count += 0;
        }
        n /= 10;
    }
    if(count >0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
