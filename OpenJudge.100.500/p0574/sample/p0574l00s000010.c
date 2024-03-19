#include <stdio.h>

int main()
{
    char a[4];

    scanf("%s",a);

    int i,j,c=0;

    for(i=0; i<4; i++)
    {
        if(a[i]==a[i+1])
        {
            c++;
        }

    }

    if(c==0)
        printf("Good");
    else
        printf("Bad");


}