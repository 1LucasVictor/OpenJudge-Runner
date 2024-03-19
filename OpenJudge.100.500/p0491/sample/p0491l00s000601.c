#include <stdio.h>
int chan(long a,long b){
    if(a>b){
        return a - b;
    }
    else
        return b - a;
}

int main()
{
    long a, b;
    scanf("%ld %ld", &a, &b);
    if(b==1){
        a = 1;
    }
    else
    {
        while (1)
        {
            if (a <= chan(a, b))
            {
                break;
            }
            else
                a = chan(a, b);
        }
    }
    if(a==b)
        a = 0;
    printf("%ld\n", a);
}