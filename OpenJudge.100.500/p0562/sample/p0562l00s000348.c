#include<stdio.h>
int main()
{
    int a,b,j,k,i;
    scanf("%d%d",&a,&b);
    if(a==b)
        printf("1\n");
    else if(b%a==0)
        printf("%d\n",b/a);
    else
        printf("%d\n",b/a+1);
    return 0;
}
