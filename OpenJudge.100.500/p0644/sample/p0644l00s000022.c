#include <stdio.h>
int main(void)
{
    int a, b, num1, num2, num3, ans;
    scanf("%d", &a);
    
    if(a/100 == 1)
        num1 = 1;
    else
        num1 = 0;
    if(a%2 == 1)
        num3 = 1;
    else
        num3 = 0;
    
    b = a%100;
    num2 = b/10;
    
    ans = num1 + num2 + num3;
    printf("%d\n", ans);
    
    return 0;
}