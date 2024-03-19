#include<stdio.h>

int main()
{
    int min,max;
    int res;
    
    scanf("%d %d",&min,&max);
    
    if(min <= max - (max % 673))
    {
        res = 0;
    }
    else
    {
        res = min * (min + 1) % 2019;
    }
    
    printf("%d\n",res);
    
    return 0;
}
