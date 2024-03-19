#include <stdio.h>
int main(void){
    int n;
    int i,j,k;
    int sum=0;
    int max=0;
    
    while(1){
        scanf("%d",&n);
        if(n==0) break;
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(j=0;j<=n-1;j++){
            for(k=0;k<n-j;k++){
                for(i=k;i<=k+j;i++){
                    sum+=a[i];
                }
                if(sum>max) max=sum;
                sum=0;
            }
        }
        printf("%d\n",max);
        sum=0;
        max=0;
    }
    return 0;
}

