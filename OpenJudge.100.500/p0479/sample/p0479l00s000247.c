#include<stdio.h>

int main(void){

    int n;
    int ans=0;
    
    scanf("%d",&n);

    int a[n];
    for (int i=1;i<n;i++){
        scanf("%d",&a[i]);
    }

    for (int i=1;i<=n;i++){
        ans=0;
        for (int j=1;j<n;j++){
            if (i==a[j])
                ans=ans+1;
        }
        printf("%d\n",ans);
    }

    return 0;
}