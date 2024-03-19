#include <stdio.h>
int main(void){
    int n;
    int i,j;
    long long int sum=0;
    long long int max;
    
    while(1){
        scanf("%d",&n);
        if(n==0) break;
        long int a[n];
        for(i=0;i<n;i++){
            scanf("%ld",&a[i]);
        }
        max=a[0];
        for(j=0;j<n;j++){
            for(i=j;i<n;i++){
                sum+=a[i];
                if(sum>max) max=sum;
            }
            sum=0;
        }
        printf("%lld\n",max);
        sum=0;
        max=0;
    }
    return 0;
}
