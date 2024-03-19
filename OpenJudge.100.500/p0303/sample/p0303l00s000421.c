//Search Allocation
#include<stdio.h>

int main(void){
    int n;
    int k;
    int w[100000];
    int i;
    long sum = 0;
    
    scanf("%d %d", &n, &k);
    for(i = 0; i < n; i++)
        scanf("%d", &w[i]);
    
    for(i = 0; i < n; i++)
        sum += w[i];
    while(1){
        if(sum % k == 0) {
            printf("%ld\n", sum / k);
            break;
        }
        else sum++;
    }   
    
    return 0;
}