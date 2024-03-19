#include<stdio.h>

int main(void){
    long A=0;
    long B=0;
    long sa=0;
    scanf("%ld %ld",&A,&B);
    sa=A+B;
    if(sa<0){
        sa*=-1;
    }
    if(sa%2!=0){
        printf("IMPOSSIBLE\n");
        return 0;
    }
    printf("%ld\n",sa/2);
    
    return 0;
}