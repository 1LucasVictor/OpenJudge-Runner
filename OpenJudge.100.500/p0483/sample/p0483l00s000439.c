#include<stdio.h>
int main()
{
    int n, i, temp=1, rem;
    scanf("%d", &n);
    while(n>0)
    {
        rem = n%10;
        if(rem == 7)
            {
                i=1;
            }
        n = n/10;
    }
    if(temp == i)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}