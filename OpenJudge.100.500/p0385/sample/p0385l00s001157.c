#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i;
    while(1){
        char x[1001] = {0};
        scanf("%s",x);
        int ans = 0;
        if(x[0] == '0'){
            break;
        }else{
            for(i=0;i<1001;i++){
                if(x[i]){
                    int a = x[i] - 48;
                    //printf("%d\n",a);
                    ans += a;
                }
            }
            printf("%d\n",ans);
        }
    }
    return 0;
}