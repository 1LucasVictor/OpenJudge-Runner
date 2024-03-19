#include <stdio.h>
long chan(long a,long b){
    if (a > b)
    {
        return a - b;
        
    }
    else
        return b - a;
}

int main()
{
    long a, b,c;
    scanf("%ld %ld", &a, &b);
    if(b==1){
        a = 1;
    }
    else if (a>chan(a, b)){
        while (1)
        {
            c = chan(a, b);
            if(c>=a)
                break;
            else
                a = c;
        }
    }
    if(a==b)
        a = 0;
    printf("%ld\n", a);
}