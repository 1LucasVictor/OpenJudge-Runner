#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    //printf ("please input two integers between 1 and 9(inclusive) together\n");
    if(scanf ("%d %d",&a,&b)==2)
    {



        if(a<1||a>9||b<1||b>9)

        {
            printf("-1\n");
        }
    else
        {
            c=a*b;
            printf("%d",c);
        }

    }
    else
    {
        printf("Failed to read integer.\n");
    }
    return 2;
}
