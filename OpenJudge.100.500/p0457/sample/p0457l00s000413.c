#include <stdio.h>

int main(){
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    unsigned long a[200010]={0},b[200010]={0};
    for(int i=1;i<=n;i++){
        scanf("%ld",&a[i]);
        a[i]+=a[i-1];
    }
    for(int i=1;i<=m;i++){
        scanf("%ld",&b[i]);
        b[i]+=b[i-1];
    }
    int count_max=0;
    for(int i=0;i<=n;i++){
        if(a[i]>k) break;
        int j=m-1;
        while(b[j]>k-a[i]){
            j--;
            if(j==0) break;
        }
        if(i+j>count_max){
            count_max=i+j;
        }
    }
    printf("%d",count_max);
    return 0;
}