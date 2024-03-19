#include <stdio.h>

int main()
{

    int a,b,c;
    int d=0;

    scanf("%d %d %d",&a,&b,&c);
    
    for (int x=a; x<=b; x++)
    {
        if (c%x==0)
            d++;
    }
    printf("%d\n",d);
    
    return 0;
    
}