#include<stdio.h>
int main()
{

    int a , b , res ;
    scanf("%d%d" , &a , &b);
    if((res=a+b)%2==0)
        printf("%d\n" , res/2);
    else printf("IMPOSSIBLE\n");

}
