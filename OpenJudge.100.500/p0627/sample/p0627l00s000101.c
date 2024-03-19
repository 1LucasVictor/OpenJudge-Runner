#include <stdio.h>
#include <string.h>
int main(void){
    int A,B;
    int plus,minus,times;
    scanf("%d %d",&A,&B);
    plus = A+B;
    minus = A-B;
    times = A*B;
    if(plus>=minus){
        if(plus>=times){
            printf("%d\n",plus);
        }
    }
    if(minus>=plus){
        if(minus>=times){
            printf("%d\n",minus);
        }
    }
    if(times>=minus){
        if(times>plus){
            printf("%d\n",times);
        }
    }
    return 0;
}
