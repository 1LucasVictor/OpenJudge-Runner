#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(void){
    //int i,j,k;
    unsigned long long L,R,i,j,k,min = 2020,I,J,temp;
  
    scanf("%lld %lld",&L,&R);
    
    if(R-L >= 2019){
        printf("0");
        return 0;
    }
    L = L % 2019;
    R = R % 2019;
    if(R == 0){
        printf("0");
        return 0;
    }
    if(L >= R) R += 2019;
    for(i = L;i < R;i++){
        for(j = i + 1;j <= R;j++){
            temp = (i*j) % 2019;
            if(temp < min){
                min = temp;
            }
        }
    }
    
    printf("%lld\n",min);
    
    return 0;
}

