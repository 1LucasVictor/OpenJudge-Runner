#include<stdio.h>

#define MIN 0
#define MAX 100
#define IS_ERR(x) (x < MIN || x > MAX)


int main(void)
{
    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);

    if(IS_ERR(a) || IS_ERR(b) || IS_ERR(c))
    {
        return -1;
    }

    if(a < b && b < c)
    {
        printf("Yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;

}
