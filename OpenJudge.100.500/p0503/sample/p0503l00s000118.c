#include<stdio.h>
int main()
{
    long long n,a[200000],i;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    if(n%2==0){
        printf("NO");
    }else{
        printf("YES");
    }
}
