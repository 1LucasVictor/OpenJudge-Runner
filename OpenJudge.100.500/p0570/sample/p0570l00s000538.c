#include<stdio.h>
int main(void){
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    int sum = a + b;
    int aa = sum / 2;
    if (sum % 2 == 0)
    {
        printf("%d",aa);
    }else
    {
        printf("IMPOSSIBLE");
    }
    
    
    return 0;
}