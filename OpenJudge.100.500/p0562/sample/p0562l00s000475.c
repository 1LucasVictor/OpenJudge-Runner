// B - Power Socket
#include <stdio.h>

int main(void){
    int a, b, cnt=1;
    scanf("%d%d", &a, &b);
    if(a==b){
        printf("1\n");
        return 0;
    }else{
        int sum=a;
        while(sum<b){
            sum--;
            sum+=a;
            cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}