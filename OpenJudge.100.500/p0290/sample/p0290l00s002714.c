#include<stdio.h>

int isprime(int x);

int main(void)
{
    int n, cnt, x;
    
    cnt=0;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
    {
        scanf("%d" , &x);
        if(isprime(x) == 0)
        {
            cnt++;
        }
    }
    
  printf("%d\n", cnt);
  
    return 0;
}

int isprime(int x)
{
    
    if(x < 2)
    {
        return 1;
    }
    else if(x == 2)
    {
        return 0;
    }
    else if(x%2 == 0)
    {
        return 1;
    }
    for(int i=3; i*i <= x; i+=2)
    {
        if(x%i==0)
        {
            return 1;
        }
    }
    return 0;
}
