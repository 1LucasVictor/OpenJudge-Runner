#include<stdio.h>

int main(void){
    int a, b, c, k;
    scanf("%d %d %d %d", &a, &b, &c, &k);
    if(a>= k){
        printf("%d", k);
    }
    else if ((a + b) >= k)
    {
        printf("%d", a);
    }
    else
    {
        k = k - a - b;
        printf("%d", a - k);
    }
    
    return 0;
}