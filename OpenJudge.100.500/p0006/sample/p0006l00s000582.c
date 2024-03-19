#include <stdio.h>

int main(int argc, const char * argv[])
{

    int money = 100000;
    int n, up;
    
    scanf("%d", &n);
    
    while(n > 0) {
        money += money * 0.05;
        up = money % 1000;
        if ( up > 0) {
            money = money - up + 1000;
        }
        n--;
    }
    
    printf("%d\n", money);
        
    return 0;
}