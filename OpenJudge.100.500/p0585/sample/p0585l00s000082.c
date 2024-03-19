#include<stdio.h>
int main()
{
    int x,b,t,candies;
    scanf("%d %d %d", &x,&b,&t);

    if(x>t) printf("0\n");
    else
    {
        candies=b*(t/x);
        printf("%d\n", candies);
    }
}
