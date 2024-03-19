#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],ans[n];
    for(int i=0;i<n;i++){
        ans[i]=0;
        for(int j=n-i;j>0;j--){
            scanf("%d",&a[j]);
            if(a[j]==i+1){
                ans[i]++;
            }
        }
        printf("%d\n",ans[i]);
    }
    return 0;
}

