#include <stdio.h>
int gcd(int a, int b){
    int tmp;
    if(a<b){
        tmp=b;
        b=a;
        a=tmp;
    }
    
    while(1) {
        a=a%b;
        tmp=b;
        b=a;
        a=tmp;
        if(b==0) break;
    }
    return a;
}

int main(void){
    int a,b;
    while(scanf("%d %d", &a, &b)!=EOF){
        
        int lcm=a/gcd(a,b)*b;
        
        printf("%d %d\n", gcd(a,b), lcm);
    }
    
}
