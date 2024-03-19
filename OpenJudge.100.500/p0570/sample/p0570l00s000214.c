#include <stdio.h>
int main()
{
    int a,b,num;
    scanf("%d%d",&a,&b);
    num = (a+b);
    if(num%2==0)
        printf("%d\n",num/2);
    else
        printf("IMPOSSIBLE\n");
    return 0;
}
