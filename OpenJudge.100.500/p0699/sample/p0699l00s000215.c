#include <stdio.h>

int main()
{
    int a[3],i;
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);
    int count5 = 0;
    int count7 = 0;
    for(i=0;i<3;i++)
    {
        if(a[i]==5)
        count5++;
        else if(a[i]==7)
        count7++;
    }
    if(count5==2 && count7==1)
    printf("YES");
    else
    printf("NO");
    
    return 0;
}