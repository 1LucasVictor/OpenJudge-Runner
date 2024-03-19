#include<stdio.h>

int main()

{
    int x;
    scanf("%d",&x);
    int happy_point=0;
    int k,l,m;
    k=x/500;
    happy_point=k*1000;
    l=x%500;
    m=l/5;
    happy_point=happy_point+m*5;
    printf("%d\n",happy_point);
    return 0;
}
