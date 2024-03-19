#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    int max;
    int s1,s2,s3;
    scanf("%d %d",&a,&b);

        s1 = a+b;
        s2 = a-b;
        s3 = a*b;
        max=s1;
        if(s2 > max)max=s2;
        if(s3 > max)max=s3;

    printf("%d\n",max);
    return 0;
}
