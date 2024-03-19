#include <stdio.h>
#include <stdlib.h>
#include <math.h>


long gcd(long x, long y){
    
    long z;
    
    while((z = x %y) != 0){
        x = y;
        y = z;
        //printf("%ld %ld\n",x,y);
    }
    
    return y;
}

long lcm(long a,long b){
//    if(gcd(a, b)){
//        exit(0);
//    }
    return (a * b) / gcd(a, b);
}

int main(int argc, const char * argv[]){
    
    long a,b;
    
    while(scanf("%ld %ld",&a,&b) != EOF){
        printf("%ld %ld\n",gcd(a,b),lcm(a,b));
    }
    return 0;
}