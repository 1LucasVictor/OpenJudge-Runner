#include <stdio.h>

int main(void){
    int n,num;
    scanf("%d",&n);
    for(num=3;num<=n;num++){
        if(num%3 == 0){
            printf(" %d",num);
            continue;
        }
        if(num%10 == 3){
            printf(" %d",num);
            continue;
        }
        if(num%100/10 == 3){
            printf(" %d",num);
            continue;
        }
        if(num%1000/100 == 3){
            printf(" %d",num);
            continue;
        }
    }printf("\n");
    return 0;
}