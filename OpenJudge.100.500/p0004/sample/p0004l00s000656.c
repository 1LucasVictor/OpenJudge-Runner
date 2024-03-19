#include <stdio.h>
 
long long int gcd( long long int a , long long int b ){
    long long int r;
    while((r = a % b)!=0){
        a = b;
        b = r;
    }
    return b;
}
 
long long int lcm( long long int a , long long int b){
    return a/gcd(a,b)*b;
}
 
int main(void){
    long long int a , b;
    while(scanf("%lld %lld" , &a , &b)!=EOF){
        printf("%lld %lld\n" , gcd(a,b) , lcm(a,b));
    }
    return 0;
}