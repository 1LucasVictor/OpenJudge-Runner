#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

int main(void){
    int i,j,k;
    int A,B;
    int answer = 0;
    
    scanf("%d %d",&A,&B);

    answer = (B-A) / (A-1) + 1;
    if((B-A) % (A-1) != 0){
        answer++;
    }
    
    if(B < A){
        if(B == 1){
            printf("%d\n",0);
        }else{
            printf("%d\n",1);
        }
    }else{
        printf("%d\n",answer);
    }
    return 0;
}