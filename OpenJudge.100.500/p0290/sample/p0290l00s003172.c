#include <stdio.h>
#include <math.h>

int isPrime(int x)
{
    if(x == 2) {
        return 1;
    }
    if(x < 2 || x % 2 == 0) {
        return 0;
    }
    int i = 3;
    while(i <= sqrt(x)) {
        if(x % i == 0) {
            return 0;
        }
        i = i + 2;
    }
    return 1;
}

int main(void){
    int i, n, p;
    int count = 0;
    
    scanf("%d\n", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%d\n", &p);
        if(isPrime(p)) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
