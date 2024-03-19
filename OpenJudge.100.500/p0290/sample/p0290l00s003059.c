#include <math.h>
#include <stdio.h>

int isprime(long x){
    int i;
    
    if(x==2) return 1;
    if(x<2 || (x%2)==0) return 0;
    
    for(i=3; i<=sqrt(x); i+=2){
        if(x%i==0)return 0;
    }
    
    return 1;
}


int main(void){
    long x;
    int n;
    int i,cnt=0;
    
    scanf("%d",&n);
    
    for(i=0; i<n; i++){
        scanf("%ld",&x);
        if(isprime(x)==1) cnt++;
    }
    
    printf("%d\n",cnt);
    
    return 0;
}