#include<stdio.h>
int main()
{
    int a, b, sum, length;
    while(scanf("%d %d", &a,&b)!=EOF)
    {
        sum=a+b;
        length=1;
        while(sum>9)
        {
            sum=sum/10;
            length++;
        }
        printf("%d", length);
    }
    return 0;
}

