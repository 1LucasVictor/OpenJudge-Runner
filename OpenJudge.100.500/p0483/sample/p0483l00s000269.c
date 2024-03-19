#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    int n,a,b,c;
    scanf("%d",&n);
    a = n%10;
    b = n/10 - (n/100)*10;
    c = n/100;
    if(a == 7 || b == 7 || c == 7){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}