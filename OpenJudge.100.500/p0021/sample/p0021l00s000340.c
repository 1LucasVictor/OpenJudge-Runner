#include<stdio.h>
 
int main(){
    int n, i, data, tmp, ans;

    while(1){
        scanf("%d", &n);
        if(n == 0)break;

        tmp = 0;
        ans = 0;

        for(; n>0; n--){
            scanf("%d", &data);
            tmp += data;
            if(tmp > ans) ans = tmp;
            if(tmp < 0) tmp = 0;
        }
        printf("%d\n", ans);
    }
    return 0;
}