#include<stdio.h>
int main()
{
    int a,b,c,x;
    scanf("%d %d %d",&a,&b,&c);
    x=a-b;
    if(c>=x)
        printf("%d\n",c-x);
    else
        printf("0\n");

return 0;


}