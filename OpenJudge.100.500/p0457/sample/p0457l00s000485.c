#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n,m,k,i,j=0,ans=0,s=0;
    scanf("%d%d%d",&n,&m,&k);
    long long int* a=(long long int*)malloc(sizeof(long long int)*n);
    long long int* b=(long long int*)malloc(sizeof(long long int)*m);
    for(i=0;i<n;i++)
        scanf("%d",a+i);
    for(i=0;i<m;i++)
        scanf("%d",b+i);
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