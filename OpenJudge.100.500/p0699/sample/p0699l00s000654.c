#include<stdio.h>
int main()
{

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int sum=a+b+c;
    if(sum==17)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
