#include<stdio.h>
 
#define MIN 1
#define MAX 10000
#define IS_ERR(x) (x < MIN || x > MAX)
 
void swap(int *x, int *y)
{
    int swap;
 
    swap = *x;
    *x = *y;
    *y = swap;
}
 
 
int main(void)
{
 
    int a, b, c;
 
    scanf("%d %d %d", &a, &b, &c);
 
    if(IS_ERR(a) || IS_ERR(b) || IS_ERR(c))
    {
        return -1;
    }
 
    if(a > b)
    {
        swap(&a, &b);
    }
 
    if(b > c)
    {
        swap(&b, &c);
    }
 
    if(a > b)
    {
        swap(&a, &b);
    }        
 
    printf("%d %d %d\n", a, b, c);
 
    return 0;
 
}
