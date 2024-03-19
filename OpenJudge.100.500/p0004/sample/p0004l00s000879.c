#include <stdio.h>
long a,b,r,x;
int main(void){
    for(;~scanf("%ld%ld",&a,&b);){
        a<b?a^=b^=a^=b:0;
        x=a*b;
        for(r=a%b;r!=0;r=a%b){
            a=b;
            b=r;
        }
        printf("%ld %ld\n",b,x/b);
    }
    
}