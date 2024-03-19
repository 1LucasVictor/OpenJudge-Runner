#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int N;
    scanf("%d",&N);
    if(N % 2 == 1){
        N -= 1;
        printf("%d",N/2+1);
    }else{
        printf("%d",N/2);
    }
    return 0;
}