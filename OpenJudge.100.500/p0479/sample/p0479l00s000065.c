#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define rep(i,n) for(i=0;i<n;i++)
#define PI 3.14159265358979323846264338327950L
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n],cnt[200010]={0};
    for(i=2;i<=n;i++){
        scanf("%d",&a[n]);
        cnt[a[n]]=cnt[a[n]]+1;
    }
    for(i=1;i<=n;i++){
        printf("%d\n",cnt[i]);
    }
    return 0;
}