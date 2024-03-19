#include <stdio.h>
#include <math.h>
int main(void) {
    int n;
    while(1) {
        scanf("%d", &n);
        if(n < 100 || n > 999) {
            continue;
        }
        else {
            break;
        }
    }
    if(n/100 == 7 || (n/10)%10 == 7 || n%10 == 7) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}