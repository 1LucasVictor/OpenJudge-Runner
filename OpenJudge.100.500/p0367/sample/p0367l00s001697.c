#include<stdio.h>
  
#define MIN 1
#define MAX 10000
#define IS_ERR(n) (n < MIN || n > MAX)
  
int main(void)
{
    int a, b, c, i, ans=0;
  
    scanf("%d %d %d", &a, &b, &c);
  
    if(IS_ERR(a) || IS_ERR(b) || IS_ERR(c) || a > b)
    {
        return -1;
    }
  
    for(i=a;i<=b;i++)
    {
        if(c % i == 0)
        {
             ans++;
        }
    }
  
    printf("%d\n", ans);
  
    return 0;
}
