#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    int a[n-1];
    int i;
    for(i=0;i<n-1;++i){
        scanf("%d",&a[i]);
    }
    int j;
    int count[n];
     for(i=0;i<n;++i){
         count[i]=0;
     }
    for(i=1;i<n;++i){
        for(j=0;j<n-1;++j){
            if(i==a[j]){
                count[i-1]+=1;
            }
            if(count[i-1]>=n){
                break;
            }
        }
    }
    for(i=0;i<n;++i){
        printf("%d\n",count[i]);
    }
    return 0;
}