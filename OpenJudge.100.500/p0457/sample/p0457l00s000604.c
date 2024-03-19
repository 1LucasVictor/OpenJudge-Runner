#include <stdio.h>

int main(void){
    long long int n,m,k;
    scanf("%lld %lld %lld",&n,&m,&k);
    long long int a[n];
    long long int b[m];
    for(int i=0; i<n; i++){
        scanf("%lld",&a[i]);
    }
    for(int i=0; i<m; i++){
        scanf("%lld",&b[i]);
    }
    long long int count_a = 0;
    long long int count_b = 0;
    long long int ans = 0;
    while(k>0){
        if(count_a>=n && count_b>=m){
            break;
        }
        else if(count_a>=n){
            k-=b[count_b++];
        }
        else if(count_b>=m){
            k-=a[count_a++];
        }
        else if(a[count_a]>b[count_b]){
            k-=b[count_b++];
        }
        else{
            k-=a[count_a++];
        }
        if(k>=0){
            ans++;
        }
    }
    printf("%lld\n",ans);
}