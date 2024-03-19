#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    if(b==1)
    {
        printf("0\n");
        return 0;
    }
    a--;
    c=b/a;
    if(b%a>1)
        c++;
    printf("%d\n",c);
    return 0;
}
