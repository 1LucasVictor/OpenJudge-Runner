#include<stdio.h>
int main()
{
    int n,a,b,t,T;
    scanf("%d %d %d",&n,&a,&b);
    T=n*a;
    if(T==b)
        printf("%d",T);
    else if(T>b)
        printf("%d",b);
    else
        printf("%d",T);

    return 0;


}
