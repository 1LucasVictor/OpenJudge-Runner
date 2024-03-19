#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==0)
        printf("%d\n",b);
    if(a==1)
        printf("%d\n",b*100);
    if(a==2)
        printf("%d\n",b*10000);
    return 0;
}
