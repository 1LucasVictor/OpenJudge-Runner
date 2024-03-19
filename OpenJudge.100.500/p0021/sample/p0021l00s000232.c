#include<stdio.h>
 
int main(){
    int n, i, data, tmp = 0, ans = 0;

    while(1){
        scanf("%d", &n);
        if(n == 0)break;

        for(; n>0; n--){
            scanf("%d", &data);
            tmp += data;
            if(tmp > ans) ans = tmp;
            if(tmp < 0) tmp = 0;
        }
        printf("%d\n", ans);
        tmp = 0;
        ans = 0;
    }
    return 0;
}