#include <stdio.h>
long a[1000000000];
int main(void){
    long long n,i,x;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&x);
        if(a[x-1]!=0){
            printf("NO");
            return 0;
        }
        else a[x-1]=1;
    }
    printf("YES");
    return 0;
}
