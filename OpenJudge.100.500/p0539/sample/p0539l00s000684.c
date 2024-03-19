#include<stdio.h>

int main(void)
{
    int a,n,c;
    scanf("%d",&a);
    for(n = 1;n < 10;n++)
    {
        if(a/n < 10)
        {
            if(a%n == 0)
            {
                c = 1;
                break;
            }
            else
            {
                c = 0;   
            }
            
        }
        else
        {
            c = 0;
        }
        
    }

    if(c == 0)
    {
        printf("No\n");
    }
    else if(c == 1)
    {
        printf("Yes\n");
    }
    return 0;
    
}