#include <stdio.h>

int main()
{
    char a[4];

    scanf("%s",a);

    int i,j,c=0;

    for(i=0;i<4;i++)
        for(j=i+1;j<4;j++)
    {
        if(a[i]==a[j])
            c++;
    }

    if(c==2)
        printf("Yes");
    else
        printf("No");
    
}