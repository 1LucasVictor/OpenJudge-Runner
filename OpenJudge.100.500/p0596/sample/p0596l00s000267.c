#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>

int main(){
    int n0=0,n1=0;
    char c='0';
    while(c=='0' || c=='1'){
        scanf("%c",&c);
        if(c=='0') n0 += 1;
        else if(c=='1') n1 += 1;
    }
    printf("%d",n0>n1? 2*n1:2*n0);
}