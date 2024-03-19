#include <stdio.h>

int main(void){
    int k,a,b,i;
    scanf("%d",&k);
    scanf("%d%d",&a,&b);
    for(i = a;i <= b;i++){
        if(i%k == 0){
            printf("OK");
            break;
        }else if(i == b){
            printf("NG");
            break;
        }
    }
    return 0;
}