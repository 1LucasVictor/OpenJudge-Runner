#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
    int a, b, c, k, total=0, i, judge1 = 0, judge2 = 0;
    scanf("%d%d%d%d",&a,&b,&c,&k);

    for(i=0;i<a;i++){
        total += 1;
        if(i+1>=k){
            judge1 = 1;
            break;
        }
    }
    
    if(judge1 == 0){
        for(i=a;i<a+b;i++){
            if(i+1>=k){
                judge2 = 1;
            }
        }
    }

    if(judge1 == 0 && judge2 == 0){
        for(i=a+b;i<a+b+c;i++){
            total -= 1;
            if(i+1>=k){
                break;
            }
        }
    }

    printf("%d",total);
    
    return 0;
}