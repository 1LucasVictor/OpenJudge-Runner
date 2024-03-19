#include <stdio.h>
int main(){
    int i,j,n,change,trade;
    int sum[5000];
    while(1){
        change=0;
        trade=0;
        memset(sum,0,sizeof(sum));
        scanf("%d",&n);
        if(n == 0){
            break;
        }
        for(i=0;i<n;i++){
            scanf("%d",&sum[i]);
        }
        for(i=0;i<n;i++){
            change=0;
            for(j=i;j<n;j++){
                change = change + sum[j];
                if(trade <= change){
                    trade = change;
                }
            }
        }
        printf("%d\n",trade);
    }
    return (0);
}