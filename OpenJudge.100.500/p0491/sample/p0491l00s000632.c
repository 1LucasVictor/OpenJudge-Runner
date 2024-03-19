#include<stdio.h>

int main()

{

    int n,k,f,s;

    scanf("%d %d",&n,&k);

    s=n%k;

    f=k-s;

    printf("%d",s<f?s:f);

    return 0;

}