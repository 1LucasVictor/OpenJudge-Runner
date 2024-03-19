#include<stdio.h>

int main(void){

    long int n;
    long int ans;
    
    scanf("%ld",&n);

    long int a[n];
    for (long int i=1;i<n;i++){
        scanf("%ld",&a[i]);
    }

    for (long int i=1;i<=n;i++){
        ans=0;
        for (long int j=1;j<n;j++){
            if (i==a[j])
                ans=ans+1;
        }
        printf("%ld\n",ans);
    }

    return 0;
}