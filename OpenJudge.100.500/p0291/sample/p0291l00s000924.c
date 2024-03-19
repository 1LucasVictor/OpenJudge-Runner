#include<stdio.h>

int main(){
    int n, i, min, max, result;
    int R[200000];
    
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &R[i]);
    }
    
    min = R[0]; max = R[0]; result = 0;
    for(i = 1; i < n; i++){
        if(max < R[i]){
            max = R[i];
        } 
        if(min > R[i]){
            min = R[i];
            max = R[i];
        }
        if(result < max - min){
            result = max - min;
        }
    }
    printf("%d\n", result);
    
    return 0;
}
