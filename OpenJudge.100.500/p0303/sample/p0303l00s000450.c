#include<stdio.h>
#define max 100000

int n,k;
int w[max];
int cheak(long long int P){
    int i=0,j;
    for(j=1;j<=k;j++){
        int s=0;
        while(s+w[i]<=P){
            s+=w[i];
            i++;
            if(i==n)return n;
        }
    }
    return i;
}

int main(){
    scanf("%d %d",&n,&k);
    int i;
    for(i=0;i<=n-1;i++)scanf("%d",&w[i]);
    
    long long int left=0,right=100000*10000;
    
    while(left+1<right){
        long long int mid=(left+right)/2;
        int v=cheak(mid);
        if(v<n){
            left=mid;
        }else{
            right=mid;
        }
    }
    printf("%lld\n",right);
    
    return 0;
}