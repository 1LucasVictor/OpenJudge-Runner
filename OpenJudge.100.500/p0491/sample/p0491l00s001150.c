#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,k,temp;
    scanf("%d %d",&n,&k);
    while(1){
        if(abs(n-k) < n){
            n = abs(n-k);
        }else{
            break;
        }
    }
    printf("%d\n",n);
}