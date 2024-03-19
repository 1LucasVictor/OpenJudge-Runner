#include <stdio.h>

int main(void){
    int n ,a ,b;
    int taxi;
    int train;
    do{
    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);
    }while(n < 1 || n > 20 || a < 1 || a > 50 || b < 1 || b > 50);
    taxi = b;
    train = a*n;
    if(taxi <= train){
        printf("%d\n",taxi);
    }else if(train < taxi){
        printf("%d\n",train);
    }
    return 0;
}