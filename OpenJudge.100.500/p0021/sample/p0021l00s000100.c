#include <stdio.h>

int main(void){
    int i,j,k,l;
    int n;
    int a[5000];
    int sum,max;
    
    while(1){
        
        scanf("%d",&n);
        if(n==0)break;
    
        max=-1000001;
        
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        
        for(i=0;i<n-1;i++){
            sum=a[i];
            for(j=i+1;j<n;j++){
                sum+=a[j];
                if(sum>max){
                    max=sum;
                }
            }
        }
        printf("%d\n",max);
    }
    return(0);
}