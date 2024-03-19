#include <stdio.h>
#include <string.h>
 
int main(void){
    long long n,a[200001],count[200001]={0};
    scanf("%lld",&n);
    for(long long i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        count[a[i]]++;
    }
    
    for(long long i=1;i<=n;i++){
        if(count[a[i]] > 1){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}