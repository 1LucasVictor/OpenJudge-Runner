#include<stdio.h>
 
int main(void){
    int i,j,h,n,a[5000],max=0,sum;
    scanf("%d",&n);
    while(n!=0){
        for(i=0; i<n; i++){
            scanf("%d",&a[i]);
        }
        for(i=0; i<n; i++){
            sum=0;
            for(j=i; j<n; j++){
                sum+=a[j];
                if((i==0 && j==0) || max<sum){
                    max=sum;
                }
            }
        }
        printf("%d\n",max);
        scanf("%d",&n);
    }
    return 0;
}