#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    c=1;
    for(b=1;b<=9;b++)
    {
        if(a==b*c)
            {
                printf("Yes");
                exit(0);
            }
        else
        {
            for(c=1;c<=b;c++)
            {
                if(a==b*c)
                    {
                        printf("Yes");
                        exit(0);
                    }
            }
        }

    }printf("No");
    return 0;
}

