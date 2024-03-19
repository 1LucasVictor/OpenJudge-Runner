#include <stdio.h>
int main(){
        long m,n,o,gcd,lcm;
        while(scanf("%d %d",&m,&n) != EOF){
        lcm = m * n;
        if( m < n){
                o = m;
                m = n;
                n = o;
        }
        while(1){
                if(n == 0){
                        gcd = m;
                        break;
                }
                o = m % n;
                m = n;
                n = o;
        }
        lcm = lcm/gcd;
                        printf("%d %d\n",gcd,lcm);
        }
return 0;
}