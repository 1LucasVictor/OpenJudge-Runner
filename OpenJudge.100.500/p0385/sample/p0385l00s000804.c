#include <stdio.h>

int main(void){
    int x;
    int ans;
    while(1){
        scanf("%d",&x);
        if(x==0){
            break;
        }else{
            ans = 0;
            while(x){
                ans += x%10;
                x /= 10;
            }
            printf("%d\n",ans);
        }            
    }
    return 0; /*0?????????*/
}