#include <stdio.h>

int main(void){
    int x;
    scanf("%d",&x);
    int happiness;
    happiness = x/500 * 1000 + (x%500)/5 * 5;
    printf("%d\n", happiness);
    return 0;
}