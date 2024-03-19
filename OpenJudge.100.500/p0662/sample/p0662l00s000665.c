#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
   
    
    if(a < c)
    {
        if(b < c)
        {
            printf("0\n");
        }
        else
        {
            if(b < d)
            {
                printf("%d\n",b-c);
            }
            else
            {
                printf("%d\n",d-c);
            }
        }
    }
    
    else // c < a
    {
        if(d < a)
        {
            printf("0\n");
        }
        else // a < d
        {
            if(d < b)
            {
                printf("%d\n",d-a);
            }
            else
            {
                printf("%d\n",b-a);
            }
        }
    }
    
    return 0;
}
