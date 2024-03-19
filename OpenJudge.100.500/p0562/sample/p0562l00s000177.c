// B - Power Socket
#include <stdio.h>

int main(void){
    int a, b, tap=0, sum=1;
    scanf("%d%d", &a, &b);
    if(a==b){
        printf("1\n");
        return 0;
    }else{
        while(sum<b){
            sum--;
            sum+=a;
            tap++;
        }
        printf("%d\n", tap);
    }
    return 0;
}