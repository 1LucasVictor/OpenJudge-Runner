#include <stdio.h>
int main(void){
    
    int N[3], temp, i, j, length;
    
    scanf("%d %d %d", &N[0], &N[1], &N[2]);
    
    length = sizeof(N) / sizeof(N[0]);
    
    for(i = 0; i < length; i++){
        for(j = length - 1; j > i; j--){
            if(N[j] < N[j-1]){
                temp = N[j];
                N[j] = N[j-1];
                N[j-1] = temp;
            }
        }
    }
    
    printf("%d %d %d\n", N[0], N[1], N[2]);
    
    return 0;
    
}