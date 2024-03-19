#include <stdio.h>
int main(void){
    
    int N[10000], i, len, min, max;
    long long sum;
    
    min = 1000000;
    max = -1000000;
    sum = 0;


    scanf("%d", &len);
    for(i = 0; i < len; i++){
        scanf("%d", &N[i]);
    
        if(N[i] < min){
            min = N[i];
        }
    
        if(N[i] > max){
            max = N[i];
        }
    
        sum += N[i];
    
    }
    
    printf("%d %d %d\n", min, max, sum);
    
    return 0;
}