#include<stdio.h>
int main()
{
    int n, sum = 0, rem, div;
    scanf("%d", &n);

    while(n>=5)
    {
        if(n>=500)
        {
            div = n/500;
            rem = n%500;
            n = rem;
            sum = sum+(div*1000);
        }
        else
        {
            div = n/5;
            rem=n%5;
            n=rem;
            sum = sum+(div*5);
        }
    }

    printf("%d\n", sum);


    return 0;
}
