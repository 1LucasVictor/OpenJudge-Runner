#include<stdio.h>

int main() {
    int n,i,j,arr[100000],cnt=0;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++){
        for(j=i;j<n;j++){
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
