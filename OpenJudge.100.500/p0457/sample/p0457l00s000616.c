#include <stdio.h>


int main(void){
    
    long int n,m,k;
    long int a[200002],b[200002];
    long int ans=0;
    long int cnta=0,cntb=0;
    scanf("%ld %ld %ld",&n,&m,&k);
    for(int i = 0;i<n;i++)scanf("%ld",&a[i]);
    for(int i = 0;i<m;i++)scanf("%ld",&b[i]);

    a[n] = k+1;
    b[m] = k+1;
    while(1){
        if(a[cnta] <= k || b[cntb] <= k){
            if(a[cnta] < b[cntb]){
                k -= a[cnta];
                cnta ++;
                ans ++;
            }else{
                k -= b[cntb];
            
                cntb ++;
                ans ++;
            }
        }else break;
    }

    printf("%ld",ans);

    return 0;
}