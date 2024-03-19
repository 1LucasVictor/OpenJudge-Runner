#include<stdio.h>
 
#define MAX_SIZE 100
#define MIN_VALUE 0
#define MAX_VALUE 1000
#define IS_ERR(x) (x < MIN_VALUE || x > MAX_VALUE)
 
int main(void)
{
    int n, a, ar[MAX_SIZE];
    scanf("%d\n", &n);
 
    if(n > MAX_SIZE) return -1;
 
    for(int i=n-1;i >= 0;i--)
    {
        scanf("%d", &a);
 
        if(IS_ERR(a)) return -1;
 
        ar[i] = a;
    }
 
    for(int j=0;j < n;j++)
    {
        if(j != 0) printf(" ");
        printf("%d", ar[j]);
    }
 
    printf("\n");
 
    return 0;
}
