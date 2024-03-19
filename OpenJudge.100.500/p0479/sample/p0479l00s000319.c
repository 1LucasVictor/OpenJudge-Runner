#include<stdio.h>

int main() {
    int n,i,j,arr[10000],cnt=0;
    scanf("%d",&n);
    for(i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++){
        for(j=i-1;j<n-1;j++){
            if(i==arr[j]){
                cnt++;
            }
        }
        printf("%d\n",cnt);
        if(cnt==n-1){
            break;
        }
        cnt = 0;
    }

    return 0;
}
