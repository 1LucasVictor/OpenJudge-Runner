#include<stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);

    int i, a[n];
    a[0]=0;
    for(i=1;i<n;i++){
        scanf("%d",&a[i]);
    }

    int ans[n];
    for(i=0;i<n;i++)ans[i]=0;
    for(i=0;i<n;i++){
        ans[a[i]-1] = ans[a[i]-1] + 1;
    }
    for(i=0;i<n;i++){
        printf("%d\n",ans[i]);
    }
    return 0;
}