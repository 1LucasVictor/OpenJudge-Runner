#include <stdio.h>
int main(void){
    int n, a[300000];
    int i,j;
    int flg = 0;
    scanf("%d", &n);
    for(i = 0;i < n;i ++){
        scanf("%d", &a[i]);
    }
    for(i = 0;i < n;i ++){
        for(j = 0;j < n;j ++){
            if(i != j){
                if(a[i] == a[j]){
                    flg = 1;
                    break;
                }
            }
        }
    }
    if(flg == 0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}