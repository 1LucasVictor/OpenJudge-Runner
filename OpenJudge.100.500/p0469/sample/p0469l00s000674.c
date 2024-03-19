#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    int k,a,b;
    scanf("%d %d %d",&k,&a,&b);
    if((b-(b%k))>=a){
        printf("OK\n");
    }else{
        printf("NG\n");
    }

    return 0;
}