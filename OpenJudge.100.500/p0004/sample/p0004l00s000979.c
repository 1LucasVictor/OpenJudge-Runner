#include <stdio.h>
 
int gcd(int a, int b);
int main(void)
{
    int a, b, q, r;
     
    while (scanf("%d", &a) != EOF){
        scanf("%d", &b);
                 
        printf("%d %d\n", gcd(a, b), a / gcd(a, b) * b);
    }
     
    return (0);
}
 
int gcd(int a, int b)
{
    int temp;
     
    if (a <= b){
        temp = a;
        a = b;
        b = temp;
    }
     
    while (1){
        if (b == 0){
            return (a);
        }
         
        temp = b;
        b = a % b;
        a = temp;
    }
}