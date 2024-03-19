#include <stdio.h>
int main()
{
    char a[1250];
    int i=0,j;

    while (1)
    {
        scanf("%c",&a[i]);
        if (a[i]=='\n')
        {
            break;
        }

        i++;
    }
    for (j=0; j<i; j++)
    {
        if (a[j]>='a' && a[j]<='z')
        {
            a[j]-=32;
        }
        else if (a[j]>='A' && a[j]<='Z')
        {
            a[j]+=32;
        }
        printf("%c",a[j]);
        if(j+1==i)
        {
            printf("\n");
        }
    }



    return 0;
}

