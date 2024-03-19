#include <stdio.h>
int main(void){
    long n;
    long i,j;
    long cnt;
    
    while(scanf("%ld",&n) != EOF){
        cnt=0;
        for(i=2; i<=n; i++){
            for(j=2; j<=i; j++){
                if(i==2) {
                    cnt++;
                    break;
                }
                if(i%j==0) break;
                if(j==i-1) cnt++;
            }
        }
        printf("%ld\n",cnt);    
    }
    return 0;
}