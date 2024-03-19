#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n,m,i,j=0,ans=0;
    long long int k,s=0;
    scanf("%d%d%lld",&n,&m,&k);
    long long int* a=(long long int*)malloc(sizeof(long long int)*n);
    long long int* b=(long long int*)malloc(sizeof(long long int)*m);
    for(i=0;i<n;i++)
        scanf("%lld",a+i);
    for(i=0;i<m;i++)
        scanf("%lld",b+i);
    i=0;
    while(s<=k){
        if(i==n){
            ans++;
            s+=*(b+j);
            j++;
        }
        else if(j==m){
            ans++;
            s+=*(a+i);
            i++;
        }
        else if(a[i]<b[j]){
            ans++;
            s+=*(a+i);
            i++;
        }
        else{
            ans++;
            s+=*(b+j);
            j++;
        }
    }
    ans--;
    printf("%d\n",ans);
    free(a); free(b);
    return 0;
}