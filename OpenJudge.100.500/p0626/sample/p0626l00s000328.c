#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==0&&b!=100)
        printf("%d\n",b);
    if(a==0&&b==100)
        printf("101\n");
    if(a==1&&b!=100)
        printf("%d\n",b*100);
    if(a==1&&b==100)
        printf("10100\n");
    if(a==2&&b!=100)
        printf("%d\n",b*10000);
    if(a==2&&b==100)
        printf("1010000\n");
    return 0;
}
