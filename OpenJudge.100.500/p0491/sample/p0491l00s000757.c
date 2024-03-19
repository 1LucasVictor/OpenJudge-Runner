#include<stdio.h>
#include<stdlib.h>

int main(){
    int k,temp;
    unsigned n;
    scanf("%d %d",&n,&k);
    while(1){
        if((abs(n-k) < n)&&(n>=0)){
            n = abs(n-k);
        }else{
            break;
        }
    }
    printf("%d\n",n);
}