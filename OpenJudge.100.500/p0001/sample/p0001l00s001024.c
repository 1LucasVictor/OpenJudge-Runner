#include<stdio.h>
int main()
{ int a,b,n,count;
    count=1;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
    n=a+b;
    n=n/10;
    ++count;
        printf("%d",count);
    }
       

    return 0;

}