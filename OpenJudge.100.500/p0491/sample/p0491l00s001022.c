#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    long n,k;
    long temp=0;
    scanf("%ld%ld",&n,&k);
    while(1){
        temp=abs(n-k);
        if(n<temp){
            printf("%ld",n);
            return 0;
        }else{
            n=temp;
        }
    }
}

