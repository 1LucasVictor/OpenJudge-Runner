#include<stdio.h>

int main(){
    int n, i;
    long min, max, result;
    long R[200000];
    
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%ld", &R[i]);
    }
    
    max = R[1]; min = R[0]; result = R[1] - R[0];
    if(R[1] < R[0]){
    	max = R[2];
    }
    for(i = 2; i < n; i++){
        if(max < R[i]){
            max = R[i];
        } 
        if(min > R[i]){
            min = R[i];
            if(i != n-1){
            	max = R[i+1];
            }
        }
        if(result < max - min){
            result = max - min;
        }
    }
    printf("%ld\n", result);
    
    return 0;
}
