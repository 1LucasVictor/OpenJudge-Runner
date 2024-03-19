#include <stdio.h>

int gcd(int m,int n){
        
    while (m != n){    
        if(m > n)
            m = m -n;
        else
            n = n - m;
    }
    return m;
}

int main(void){
    int m,n;
    while(scanf("%d %d", &m, &n)!= EOF){
        
        printf("%d ", gcd(m,n));
        int lcm = m / gcd(m,n) * n;
        printf("%d\n", lcm);
    }
    return 0;   
}

