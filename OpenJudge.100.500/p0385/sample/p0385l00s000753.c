#include <stdio.h>
#include <stdlib.h>

int main(void){
    char x[1001] = {0};
    int i;
    while(1){
        scanf("%s",x);
        int ans = 0;
        if(x[0] == '0'){
            break;
        }else{
            for(i=0;i<1001;i++){
                if(x[i]){
                    int a = x[i] - '0';
                    //printf("%d\n",a);
                    ans += a;
                }
            }
            printf("%d\n",ans);
        }
    }
    return 0;
}