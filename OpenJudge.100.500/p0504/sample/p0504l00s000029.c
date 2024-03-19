#include<stdio.h>
int main()
{
    int a,b,count=0,m;
    scanf("%d%d",&a,&b);
    while(a>0){
        m=a-b;
        count++;
        a=m;
    }
    printf("%d\n",count);
    return 0;
}
