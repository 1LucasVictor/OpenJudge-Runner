#include <stdio.h>
 
int main(void) {
    
    int N, cost_train, cost_taxi;

    scanf("%d %d %d", &N, &cost_train, &cost_taxi);

    int cost_train_all = N * cost_train;

    if(cost_train_all >= cost_taxi)
        printf("%d\n", cost_taxi);
    
    else
        printf("%d\n", cost_train_all);
 
    return 0;
}