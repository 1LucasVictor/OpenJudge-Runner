#include <stdio.h>
#include <stdlib.h>

int main(){
    long int n,k;
    int result = 0;
    int tmp = 0;
    scanf("%d %d",&n,&k);
    result = n;
    while(1){
        tmp = abs(n - k);
        if(tmp < n){
            n = tmp;
            result = tmp;
        }else{
            printf("%d",result);
            break;
        }
    }
    return 0;
}