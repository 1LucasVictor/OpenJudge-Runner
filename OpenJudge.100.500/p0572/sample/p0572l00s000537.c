#include <stdio.h>
#define MOD 2019

int main(void){
    int l,r,end;
    int i,j;
    long long int min = 2019;
    long long int tmp;
    scanf("%d %d", &l, &r);
    
    if(r > l + MOD){
        end = l + MOD;
    }else{
        end = r;
    }
    
    for(i = l; i <= end; i++){
        for(j = i+1; j <= end; j++){
            tmp = i * j;
            tmp = tmp % MOD;
            if(tmp < min){
                min = tmp;
            }
        }
    }
    
    printf("%d", min);
    
    return 0;
}