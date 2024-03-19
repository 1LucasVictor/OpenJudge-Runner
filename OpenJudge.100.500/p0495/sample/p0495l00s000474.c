#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[3];
    int i;
    int flag=1;
    for(i=0;i<3;i++)
    a[i]=getchar();
    if(a[0]==a[1])
    {
        if(a[1]==a[2])
            flag=0;
    }
    if(flag==0)
        printf("No");
    else
        printf("Yes");
    return 0;
}
