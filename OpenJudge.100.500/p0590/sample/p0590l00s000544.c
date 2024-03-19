#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,k;
    scanf("%d\n%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e,&k);
    if (a<=123&&a>0&&b>0&&b<=123&&c>0&&c<=123&&d>0&&d<=123&&e>0&&e<=123&&a-b<=0&&b-c<=0&&c-d<=0&&d-e<=0&&b-a<=k&&c-a<=k&&d-a<=k&&e-a<=k&&c-b<=k&&d-b<=k&&e-b<=k&&d-c<=k&&e-c<=k&&e-d<=k)
        printf("Yay!");
    else
        printf(":(");
    return 0;
}
