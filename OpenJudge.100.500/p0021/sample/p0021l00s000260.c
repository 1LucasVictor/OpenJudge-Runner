#include <stdio.h>
int main(void){
    int i,j,n,a[5000];
    long sum,max;
    
    while(1){
        scanf("%d",&n);
        if(n==0) break;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        
        max=a[0];
        for(i=0;i<n;i++){
            sum=0;
            for(j=i;j<n;j++){
                sum+=a[j];
                if(max<sum) max=sum;
            }
        }
        printf("%ld\n",max);
        
    }
    
    return 0;
}