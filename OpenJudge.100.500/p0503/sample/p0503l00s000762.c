#include<stdio.h>
#include<stdlib.h>
#define ll long long 
int cmp(const void *a,const void *b){return *(long long*)a-*(long long*)b;}
int main(){
    int n;
    scanf("%d",&n);
    ll a[n];
    for(int i=0;i<n;i++)
        scanf("%lld",&a[i]);
    qsort(a,n,sizeof(long long),cmp);
    int count=0;
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1])
            count++;
    }
    if(count==n-1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}