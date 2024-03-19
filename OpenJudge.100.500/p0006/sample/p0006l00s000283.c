#include<stdio.h>

int main(void){
    long i = 100000;
    long j,n;
    scanf("%ld",&n);
    for(j = n;j > 0;j--){
        i = i + i * 0.05;
        if(i % 1000 == 0){
        }
        else{
            i = i / 1000;
            i = i * 1000 + 1000;
        }
    }
    printf("%ld\n",i);
    return 0;
}