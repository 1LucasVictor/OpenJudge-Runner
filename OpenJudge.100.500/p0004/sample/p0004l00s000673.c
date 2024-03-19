#include <stdio.h>



int GCD(int c, int d){
    if(c%d == 0){
        return d;
    }
    else{
        return GCD(d, c%d);
    }
}

int main(void){
    long int a, b;
    while(scanf("%ld %ld", &a, &b) != EOF){
        if(a < b){
            long int x = a;
            a = b;
            b = x;
        }
        long int gcd_a_b = GCD(a, b);
        printf("%d %d\n", gcd_a_b, a*b/gcd_a_b);
    }
    return 0;
}


