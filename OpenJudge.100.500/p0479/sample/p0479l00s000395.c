#include <stdio.h>

int main(void){
    int i,n,sv,ans[200001] = {0};

    scanf("%d",&n);
    for(i=0; i<n-1; i++){
        scanf("%d",&sv);
        ans[sv]++;
    }

    for(i=1;i<=n;i++){
        printf("%d\n",ans[i]);
    }
    return 0;
}