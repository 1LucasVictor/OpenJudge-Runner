#include <stdio.h>
int main(void){
     int n, money=100000; 
     scanf("%d", &n);
    for(int i=1; i<=n; i++){
        money *= 1.05;
        if(money%1000 != 0){
            money = money/1000*1000 +1000;
        }
    }
    printf("%d\n", money);
    return 0;
}

